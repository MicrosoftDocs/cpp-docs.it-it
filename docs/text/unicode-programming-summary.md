---
title: Riepilogo della programmazione Unicode | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Unicode [C++], programming with
- Unicode [C++], MFC and C run-time functions
ms.assetid: a4c9770f-6c9c-447c-996b-980920288bed
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 03ee8a4032b054eb670de160aea9ec54dcf80f4d
ms.sourcegitcommit: a5916b48541f804a79891ff04e246628b5f9a24a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/09/2018
---
# <a name="unicode-programming-summary"></a>Riepilogo della programmazione Unicode
Per sfruttare il supporto di run-time C e MFC per Unicode, è necessario:  
  
-   Definire **Unicode**.  
  
     Definire il simbolo **Unicode** prima di compilare il programma.  
  
-   Specificare il punto di ingresso.  
  
     Nel **Output** pagina della cartella del progetto del Linker [pagine delle proprietà](../ide/property-pages-visual-cpp.md) finestra di dialogo, impostare il simbolo di punto di ingresso **wWinMainCRTStartup**.  
  
-   Utilizzare le funzioni di runtime portabili e tipi.  
  
     Utilizzare le funzioni di runtime C appropriate per la gestione delle stringhe Unicode. È possibile utilizzare il **wcs** famiglia di funzioni, ma è preferibile portabile completamente (abilitato a livello internazionale) **TCHAR** macro. Queste macro sono precedute tutte dal prefisso **tcs**; essi sostituire, uno per uno, per il **str** famiglia di funzioni. Queste funzioni sono descritte dettagliatamente nel [internazionalizzazione](../c-runtime-library/internationalization.md) sezione la *riferimenti alla libreria di Run-Time*. Per ulteriori informazioni, vedere [mapping testo generico in Tchar. h](../text/generic-text-mappings-in-tchar-h.md).  
  
     Utilizzare **TCHAR** e i tipi di dati portabili correlati descritti [il supporto per Unicode](../text/support-for-unicode.md).  
  
-   Gestire correttamente le stringhe letterali.  
  
     Il compilatore Visual C++ interpreta una stringa letterale codificata come:  
  
    ```  
    L"this is a literal string"  
    ```  
  
     per indicare una stringa di caratteri Unicode. È possibile utilizzare lo stesso prefisso per i caratteri effettivi. Utilizzare il **t** macro per codificare le stringhe letterali in modo generico, pertanto vengono compilate come stringhe Unicode in Unicode o come stringhe ANSI (compreso il formato MBCS) non Unicode. Ad esempio, invece di:  
  
    ```  
    pWnd->SetWindowText( "Hello" );  
    ```  
  
     Utilizzo:  
  
    ```  
    pWnd->SetWindowText( _T("Hello") );  
    ```  
  
     Con **Unicode** definito, **t** Converte la stringa letterale per il form con prefisso L; in caso contrario, **t** Converte la stringa senza il prefisso L.  
  
    > [!TIP]
    >  Il **t** macro è identica al `_TEXT` (macro).  
  
-   Prestare attenzione passaggio lunghezze di stringa alle funzioni.  
  
     Alcune funzioni auspicabile che il numero di caratteri in una stringa. altri auspicabile che il numero di byte. Ad esempio, se **Unicode** è definito, la seguente chiamata a un `CArchive` oggetto non funzionerà (`str` è un `CString`):  
  
    ```  
    archive.Write( str, str.GetLength( ) );    // invalid  
    ```  
  
     In un'applicazione Unicode, la lunghezza indica il numero di caratteri, ma non il numero corretto di byte, perché ogni carattere è 2 byte. In alternativa, è necessario utilizzare:  
  
    ```  
    archive.Write( str, str.GetLength( ) * sizeof( _TCHAR ) );    // valid  
    ```  
  
     che specifica il numero corretto di byte da scrivere.  
  
     Tuttavia, le funzioni membro MFC che sono orientate ai caratteri anziché orientato ai byte, funzionano anche senza questa codifica supplementare:  
  
    ```  
    pDC->TextOut( str, str.GetLength( ) );  
    ```  
  
     `CDC::TextOut`accetta un numero di caratteri, non un numero di byte.  
  
-   Utilizzare [fopen_s, wfopen_s](../c-runtime-library/reference/fopen-s-wfopen-s.md) per aprire i file Unicode.  
  
 Per riepilogare, MFC e la libreria run-time forniscono il supporto per la programmazione Unicode:  
  
-   Ad eccezione delle funzioni membro di classe database, tutte le funzioni MFC sono abilitata per Unicode, tra cui `CString`. `CString`fornisce inoltre funzioni di conversione Unicode/ANSI.  
  
-   La libreria run-time fornisce versioni Unicode delle tutte le funzioni di gestione delle stringhe. (La libreria run-time fornisce anche le versioni portabili adatte per Unicode o MBCS. Si tratta di **tcs** macro.)  
  
-   Tchar. h fornisce tipi di dati portabili e **t** macro per la conversione di stringhe letterali e caratteri. Per ulteriori informazioni, vedere [mapping testo generico in Tchar. h](../text/generic-text-mappings-in-tchar-h.md).  
  
-   La libreria run-time fornisce una versione a caratteri wide di **principale**. Utilizzare **wmain** per rendere l'applicazione riconosce il formato Unicode.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per Unicode](../text/support-for-unicode.md)