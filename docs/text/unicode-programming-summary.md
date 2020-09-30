---
title: Riepilogo della programmazione Unicode
ms.date: 11/04/2016
helpviewer_keywords:
- Unicode [C++], programming with
- Unicode [C++], MFC and C run-time functions
ms.assetid: a4c9770f-6c9c-447c-996b-980920288bed
ms.openlocfilehash: 5095e1c58db3e5c35eb9215367f2fbb064bc228a
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91504719"
---
# <a name="unicode-programming-summary"></a>Riepilogo della programmazione Unicode

Per sfruttare i vantaggi del supporto di MFC e della fase di esecuzione del linguaggio C per Unicode, è necessario:

- Definire `_UNICODE` .

   Definire il simbolo `_UNICODE` prima di compilare il programma.

- Specificare il punto di ingresso.

   Nella pagina **Avanzate** della cartella **linker** della finestra di dialogo Pagine delle [proprietà](../build/reference/property-pages-visual-cpp.md) del progetto impostare il simbolo del **punto di ingresso** su `wWinMainCRTStartup` .

- Utilizzare le funzioni e i tipi di run-time portabili.

   Utilizzare le funzioni di runtime del linguaggio C appropriate per la gestione delle stringhe Unicode. È possibile usare la `wcs` famiglia di funzioni, ma è possibile preferire le macro completamente portabili (abilitate a livello internazionale) `_TCHAR` . Queste macro sono tutte precedute dal prefisso. `_tcs` sostituiscono, una per una, per la `str` famiglia di funzioni. Queste funzioni sono descritte in dettaglio nella sezione [internazionalizzazione](../c-runtime-library/internationalization.md) dei *riferimenti alla libreria di runtime*. Per ulteriori informazioni, vedere [mapping di testo generico in TCHAR. h](../text/generic-text-mappings-in-tchar-h.md).

   Usare `_TCHAR` e i tipi di dati portabili correlati descritti in [supporto per Unicode](../text/support-for-unicode.md).

- Gestire correttamente le stringhe letterali.

   Il compilatore Visual C++ interpreta una stringa letterale codificata come:

    ```cpp
    L"this is a literal string"
    ```

   per indicare una stringa di caratteri Unicode. È possibile usare lo stesso prefisso per i caratteri letterali. Utilizzare la `_T` macro per codificare stringhe letterali in modo generico, in modo che vengano compilate come stringhe Unicode in Unicode o come stringhe ANSI (incluso MBCS) senza Unicode. Ad esempio, anziché:

    ```cpp
    pWnd->SetWindowText( "Hello" );
    ```

   usare

    ```cpp
    pWnd->SetWindowText( _T("Hello") );
    ```

   Con `_UNICODE` definito, `_T` converte la stringa letterale nel form con prefisso l. in caso contrario, `_T` converte la stringa senza il prefisso L.

    > [!TIP]
    >  La `_T` macro è identica a quella della `_TEXT` macro.

- Prestare attenzione passando le lunghezze di stringa alle funzioni.

   Alcune funzioni desiderano il numero di caratteri in una stringa. altri desiderano il numero di byte. Se, ad esempio, `_UNICODE` è definito, la chiamata seguente a un `CArchive` oggetto non funzionerà ( `str` è `CString` ):

    ```cpp
    archive.Write( str, str.GetLength( ) );    // invalid
    ```

   In un'applicazione Unicode la lunghezza restituisce il numero di caratteri ma non il numero di byte corretto, perché ogni carattere è di 2 byte. È invece necessario usare:

    ```cpp
    archive.Write( str, str.GetLength( ) * sizeof( _TCHAR ) );    // valid
    ```

   che specifica il numero corretto di byte da scrivere.

   Tuttavia, le funzioni membro MFC che sono orientate ai caratteri, anziché orientate ai byte, funzionano senza questo codice aggiuntivo:

    ```cpp
    pDC->TextOut( str, str.GetLength( ) );
    ```

   `CDC::TextOut` accetta un numero di caratteri, non un numero di byte.

- Utilizzare [fopen_s _wfopen_s](../c-runtime-library/reference/fopen-s-wfopen-s.md) per aprire i file Unicode.

Per riepilogare, MFC e la libreria di runtime forniscono il seguente supporto per la programmazione Unicode:

- Ad eccezione delle funzioni membro della classe di database, tutte le funzioni MFC sono abilitate per Unicode, incluso `CString` . `CString` fornisce anche funzioni di conversione Unicode/ANSI.

- La libreria run-time fornisce le versioni Unicode di tutte le funzioni di gestione delle stringhe. La libreria di runtime fornisce anche versioni portabili adatte per Unicode o per MBCS. Queste sono le `_tcs` macro.

- TCHAR. h fornisce tipi di dati portabili e la `_T` macro per la conversione di stringhe e caratteri letterali. Per ulteriori informazioni, vedere [mapping di testo generico in TCHAR. h](../text/generic-text-mappings-in-tchar-h.md).

- La libreria di runtime fornisce una versione a caratteri wide di `main` . Usare `wmain` per rendere l'applicazione compatibile con Unicode.

## <a name="see-also"></a>Vedere anche

[Supporto per Unicode](../text/support-for-unicode.md)
