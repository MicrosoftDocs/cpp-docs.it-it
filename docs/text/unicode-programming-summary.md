---
title: "Riepilogo della programmazione Unicode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Unicode [C++], funzioni MFC e di runtime del linguaggio C"
  - "Unicode [C++], programmazione"
ms.assetid: a4c9770f-6c9c-447c-996b-980920288bed
caps.latest.revision: 8
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 8
---
# Riepilogo della programmazione Unicode
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per utilizzare il supporto MFC e il supporto di runtime del linguaggio C per il formato Unicode, è necessario eseguire le operazioni riportate di seguito.  
  
-   Definire **\_UNICODE**.  
  
     Definire il simbolo **\_UNICODE** prima di compilare il programma.  
  
-   Specificare il punto di ingresso.  
  
     Nella pagina **Output** della cartella Linker, all'interno della finestra di dialogo [Pagine delle proprietà](../ide/property-pages-visual-cpp.md) del progetto, impostare il simbolo del punto di ingresso su **wWinMainCRTStartup**.  
  
-   Utilizzare funzioni e tipi di runtime portabili.  
  
     Utilizzare le funzioni appropriate di runtime del linguaggio C per la gestione delle stringhe Unicode.  È possibile utilizzare l'insieme di funzioni **wcs**, ma potrebbe essere preferibile l'utilizzo delle macro **\_TCHAR** completamente portabili, attivate a livello di impostazioni internazionali.  Queste macro sono tutte caratterizzate dal prefisso **\_tcs** e ciascuna di esse sostituisce la funzione corrispondente della famiglia **str**.  Queste funzioni sono descritte in dettaglio nella sezione [Internazionalizzazione](../c-runtime-library/internationalization.md) in *Riferimenti alla libreria di runtime*.  Per ulteriori informazioni, vedere [Mapping di testo generico in Tchar.h](../text/generic-text-mappings-in-tchar-h.md).  
  
     Utilizzare **\_TCHAR** e i tipi di dati portabili correlati descritti in [Supporto per Unicode](../text/support-for-unicode.md).  
  
-   Gestire in modo appropriato le stringhe effettive.  
  
     Il compilatore di Visual C\+\+ interpreta una stringa effettiva codificata nel modo seguente:  
  
    ```  
    L"this is a literal string"  
    ```  
  
     come una stringa di caratteri Unicode.  È possibile utilizzare lo stesso prefisso per i caratteri effettivi.  Utilizzare le macro **\_T** per codificare le stringhe effettive in modo generico, in modo che vengano compilate come stringhe Unicode in modalità Unicode o come stringhe ANSI, compreso il formato MBCS, in modalità non Unicode.  Anziché, ad esempio:  
  
    ```  
    pWnd->SetWindowText( "Hello" );  
    ```  
  
     utilizzare:  
  
    ```  
    pWnd->SetWindowText( _T("Hello") );  
    ```  
  
     Se si definisce **\_UNICODE**, **\_T** converte la stringa letterale nel formato con prefisso "L". In caso contrario, **\_T** converte la stringa senza il prefisso "L".  
  
    > [!TIP]
    >  La macro **\_T** è identica alla macro `_TEXT`.  
  
-   Prestare attenzione quando si passa la lunghezza delle stringhe alle funzioni.  
  
     Alcune funzioni richiedono il numero di caratteri della stringa, mentre altre richiedono il numero di byte.  Se, ad esempio, si definisce **\_UNICODE**, la seguente chiamata a un oggetto `CArchive` non verrà eseguita correttamente \(`str` è di tipo `CString`\):  
  
    ```  
    archive.Write( str, str.GetLength( ) );    // invalid  
    ```  
  
     In un'applicazione Unicode, la lunghezza indica il numero di caratteri, ma non il numero corretto di byte, poiché ciascun carattere occupa due byte.  È invece necessario utilizzare:  
  
    ```  
    archive.Write( str, str.GetLength( ) * sizeof( _TCHAR ) );    // valid  
    ```  
  
     che specifica il numero corretto di byte da scrivere.  
  
     Tuttavia, le funzioni membro MFC, che sono orientate ai caratteri anziché ai byte, funzionano anche senza questa codifica supplementare:  
  
    ```  
    pDC->TextOut( str, str.GetLength( ) );  
    ```  
  
     `CDC::TextOut` richiede il numero di caratteri, non il numero di byte.  
  
-   Per aprire i file Unicode, utilizzare [fopen\_s, \_wfopen\_s](../c-runtime-library/reference/fopen-s-wfopen-s.md).  
  
 Riassumendo, MFC e la libreria di runtime forniscono il seguente supporto per la programmazione Unicode in Windows 2000:  
  
-   Fatta eccezione per le funzioni membro delle classi di database, tutte le funzioni MFC sono abilitate per il formato Unicode, incluso `CString`.  Quest'ultimo fornisce anche le funzioni di conversione Unicode\/ANSI.  
  
-   La libreria di runtime fornisce le versioni Unicode di tutte le funzioni per la gestione delle stringhe, nonché le versioni portabili adatte al formato Unicode o MBCS,  ovvero le macro **\_tcs**.  
  
-   Tchar.h fornisce tipi di dati portabili e le macro **\_T** per la conversione delle stringhe e dei caratteri letterali.  Per ulteriori informazioni, vedere [Mapping di testo generico in Tchar.h](../text/generic-text-mappings-in-tchar-h.md).  
  
-   La libreria di runtime fornisce una versione a caratteri estesi di **main**.  Utilizzare **wmain** per fare in modo che l'applicazione riconosca il formato Unicode.  
  
## Vedere anche  
 [Supporto per Unicode](../text/support-for-unicode.md)