---
title: Riepilogo della programmazione Unicode | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Unicode [C++], programming with
- Unicode [C++], MFC and C run-time functions
ms.assetid: a4c9770f-6c9c-447c-996b-980920288bed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 78e40e258334ed1e9622e31e8452810f231cb61f
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42582003"
---
# <a name="unicode-programming-summary"></a>Riepilogo della programmazione Unicode
Per poter sfruttare il supporto di run-time di C e MFC per Unicode, è necessario:  
  
-   Definire `_UNICODE`.  
  
     Definire il simbolo `_UNICODE` prima della compilazione del programma.  
  
-   Specificare il punto di ingresso.  
  
     Nel **Output** pagina della **Linker** cartella del progetto [pagine delle proprietà](../ide/property-pages-visual-cpp.md) nella finestra di dialogo, impostare il **punto di ingresso** simbolo da `wWinMainCRTStartup`.  
  
-   Usare i tipi e funzioni di runtime portabile.  
  
     Utilizzare le funzioni di runtime C appropriate per la gestione delle stringhe Unicode. È possibile usare la `wcs` famiglia di funzioni, ma si potrebbe preferire il portatile completamente (abilitato a livello internazionale) `_TCHAR` macro. Queste macro sono precedute tutte dal prefisso `_tcs`; essi sostituire, uno per uno, per il `str` della famiglia di funzioni. Queste funzioni sono descritte dettagliatamente nel [internazionalizzazione](../c-runtime-library/internationalization.md) sezione il *Run-Time Library Reference*. Per altre informazioni, vedere [mapping testo generico in Tchar. h](../text/generic-text-mappings-in-tchar-h.md).  
  
     Uso `_TCHAR` e i tipi di dati portabili correlati descritti nella [supporto per Unicode](../text/support-for-unicode.md).  
  
-   Gestire correttamente le stringhe letterali.  
  
     Il compilatore Visual C++ interpreta una stringa letterale codificata come segue:  
  
    ```  
    L"this is a literal string"  
    ```  
  
     per indicare una stringa di caratteri Unicode. È possibile usare lo stesso prefisso per i caratteri letterali. Usare il `_T` macro per codificare le stringhe letterali in modo generico, in modo che la compilazione come stringhe Unicode in Unicode o sotto forma di stringhe ANSI (inclusi MBCS) non Unicode. Ad esempio, invece di:  
  
    ```  
    pWnd->SetWindowText( "Hello" );  
    ```  
  
     Uso:  
  
    ```  
    pWnd->SetWindowText( _T("Hello") );  
    ```  
  
     Con `_UNICODE` , definito `_T` Converte la stringa letterale per il form con prefisso L; in caso contrario, `_T` Converte la stringa senza il prefisso L.  
  
    > [!TIP]
    >  Il `_T` macro è identica al `_TEXT` macro.  
  
-   Prestare attenzione passa lunghezze di stringa a funzioni.  
  
     Alcune funzioni vuole che il numero di caratteri in una stringa. altri utenti desidera che il numero di byte. Ad esempio, se `_UNICODE` è definito, la chiamata seguente a un `CArchive` oggetto non funzionerà (`str` è un `CString`):  
  
    ```  
    archive.Write( str, str.GetLength( ) );    // invalid  
    ```  
  
     In un'applicazione Unicode, la lunghezza indica il numero di caratteri, ma non il numero corretto di byte, poiché ogni carattere è 2 byte. In alternativa, è necessario usare:  
  
    ```  
    archive.Write( str, str.GetLength( ) * sizeof( _TCHAR ) );    // valid  
    ```  
  
     che specifica il numero corretto di byte da scrivere.  
  
     Tuttavia, le funzioni membro MFC che sono orientate ai caratteri, invece, orientato ai byte funzionano senza questo codice supplementare:  
  
    ```  
    pDC->TextOut( str, str.GetLength( ) );  
    ```  
  
     `CDC::TextOut` accetta un numero di caratteri, non un numero di byte.  
  
-   Uso [fopen_s, wfopen_s](../c-runtime-library/reference/fopen-s-wfopen-s.md) per aprire i file Unicode.  
  
 Per riepilogare, MFC e la libreria run-time forniscono il supporto di programmazione Unicode:  
  
-   Ad eccezione delle funzioni membro di classe database, tutte le funzioni MFC sono compatibili con Unicode, tra cui `CString`. `CString` fornisce inoltre funzioni di conversione Unicode/ANSI.  
  
-   La libreria run-time fornisce le versioni di Unicode di tutte le funzioni di gestione delle stringhe. (La libreria run-time fornisce anche versioni portabile adatte per Unicode o per MBCS. Questi sono i `_tcs` macro.)  
  
-   Tchar. h fornisce tipi di dati trasferibili e `_T` macro per la conversione dei caratteri e stringhe letterali. Per altre informazioni, vedere [mapping testo generico in Tchar. h](../text/generic-text-mappings-in-tchar-h.md).  
  
-   La libreria di runtime fornisce una versione a caratteri wide di `main`. Usare `wmain` per rendere l'applicazione in grado di riconoscere Unicode.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per Unicode](../text/support-for-unicode.md)