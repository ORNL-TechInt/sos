//
// The client facing interface
//

/** The local context type */
typedef int sos_context_t;

typedef int sos_container_t;

typedef int sos_object_t;

typedef int sos_operation_t;

typedef int sos_cursor_t;

/** Create a local I/O context for the scalable I/O service */
sos_create_ctx(sos_context_t*);

/** Destroy the local I/O context for the scalable I/O service */
sos_destroy_ctx(sos_context_t*);

/** Get a vector of completed operations from the local I/O context --
    seems like it might require an OS assist.
    Will have to think about how to avoid that. */
sos_get_completed_ops(sos_context_t*);


///////////
// Namespace Operation (anything remote is async by default)
///////////
/** Create an object */
sos_create_object(sos_context_t*);

/** Erase the data associated with an object */
sos_erase_object(sos_context_t*);

/** Add an object to a container */
sos_add_object(sos_context_t*);

/** Find an object.  Does it require a container? */
sos_find_object(sos_context_t*);

sos_open_object(sos_context_t*); // Not sure I want this one

/** Search the entire system for something */
sos_probe(sos_context_t*);

/** Search the container for an object */
sos_probe_container(sos_context_t*, sos_container_t);

/** Retrieve the attributes for an object */
sos_getattr(sos_context_t*, sos_object_t);


///////////
// I/O Operations
///////////
/** Write data range to an objects data fork */
sos_write(sos_context_t*, sos_object_t, offset_t, size_t, void*, sos_operation_t*);

/** Write data range to an object's data log */
sos_append(sos_context_t*, sos_object_t, offset_t, size_t, void*, sos_operation_t*);

/** Read data range from an object */
sos_read(sos_context_t*, sos_object_t, offset_t, size_t, void*, sos_operation_t*);

/** Remove a data range from an object */
sos_punch(sos_context_t*, sos_object_t, offset_t, size_t, sos_operation_t*);
