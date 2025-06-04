/*
 * Implements specific data capture, resizing, JPEG compression, and periodic data frame transmission.
 *
 * - Uses Direct3D duplication to acquire the current desktop data frame into a staging texture.
 * - Copies GPU data into a local buffer and scales it using GDI+ bitmap routines.
 * - Compresses the scaled image to JPEG and stores it in memory via IStream.
 * - Separate thread coordinates capture-processing-send in a timed loop with optional socket reuse.
 * - Frees all intermediate resources after each data frame to avoid leaks and preserve performance.
 *
 * Code has been redacted for ethical and security reasons.
 * 175 LOC
 */