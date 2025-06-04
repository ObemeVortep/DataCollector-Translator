/*
 * This header implements two inline functions for displaying a message box with a status code:
 * - OutputMessageBoxW for wide-character text.
 * - OutputMessageBoxA for ANSI text.
 * Both functions, under the hood and without using the C runtime, dynamically load User32.dll,
 * resolve MessageBox and wsprintf by their hashes, format a 64-bit status code as hexadecimal,
 * display it in a message box with a custom caption, and then unload User32.dll.
 *
 * Code has been redacted for ethical and security reasons.
 * 98 LOC
 */