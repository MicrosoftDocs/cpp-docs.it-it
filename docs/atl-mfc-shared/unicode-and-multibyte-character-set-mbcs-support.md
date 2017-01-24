---
title: "Supporto per set di caratteri Unicode e multibyte (MBCS) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC [C++], supporto del set di caratteri"
  - "MBCS [C++], stringhe e supporto di MFC"
  - "stringhe [C++], supporto di MBCS in MFC"
  - "set di caratteri [C++], multibyte"
  - "Unicode [C++], stringhe MFC"
  - "Unicode [C++], oggetti string"
  - "stringhe [C++], Unicode"
  - "stringhe [C++], supporto del set di caratteri"
ms.assetid: 44b3193b-c92d-40c5-9fa8-5774da303cce
caps.latest.revision: 17
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto per set di caratteri Unicode e multibyte (MBCS)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Alcuni linguaggi, ad esempio giapponese e cinese, hanno grandi set di caratteri.  Per supportare la programmazione in questi mercati, la libreria Microsoft Foundation Class \(MFC\) garantisce due metodi diversi per gestire grandi set di caratteri:  
  
-   [Unicode](#_core_mfc_support_for_unicode_strings)  
  
-   [Set di caratteri multibyte \(MBCS\)](#_core_mfc_support_for_mbcs_strings)  
  
 È consigliabile utilizzare il formato Unicode per tutti i nuovi progetti di sviluppo.  
  
##  <a name="_core_mfc_support_for_unicode_strings"></a> Supporto MFC per le stringhe Unicode  
 L'intera libreria di classi è compatibile in modo condizionale con i caratteri e con le stringhe Unicode.  In particolare, la classe [CString](../atl-mfc-shared/reference/cstringt-class.md) è compatibile con Unicode.  
  
|||||  
|-|-|-|-|  
|UAFXCW.LIB|UAFXCW.PDB|UAFXCWD.LIB|UAFXCWD.PDB|  
|MFC*xx*U.LIB|MFC*xx*U.PDB|MFC*xx*U.DLL|MFC*xx*UD.LIB|  
|MFC*xx*UD.PDB|MFC*xx*UD.DLL|MFCS*xx*U.LIB|MFCS*xx*U.PDB|  
|MFCS*xx*UD.LIB|MFCS*xx*UD.PDB|MFCM*xx*U.LIB|MFCM*xx*U.PDB|  
|MFCM*xx*U.DLL|MFCM*xx*UD.LIB|MFCM*xx*UD.PDB|MFCM*xx*UD.DLL|  
  
 \(*xx* rappresenta il numero di versione del file; ad esempio, '80' significa versione 8,0.\)  
  
 `CString` è basato sul tipo di dati `TCHAR`.  Se il simbolo `_UNICODE` è definito per una build del programma, `TCHAR` viene definito come tipo `wchar_t`, un tipo di codifica dei caratteri a 16 bit.  In caso contrario, `TCHAR` è definito come tipo `char`, che rappresenta la normale codifica dei caratteri a 8 bit.  Pertanto, se si utilizza il formato Unicode, un oggetto di tipo `CString` è composto da caratteri a 16 bit.  Se non si utilizza il formato Unicode, è costituito da caratteri di tipo `char`.  
  
 Per completare la programmazione Unicode dell'applicazione, è necessario anche:  
  
-   Utilizzare la macro `_T` per codificare in modo condizionale stringhe di letterali in modo che siano portabili verso Unicode.  
  
-   Quando si passano le stringhe, guardare con attenzione se gli argomenti di una funzione richiedono una lunghezza in caratteri o una lunghezza in byte.  La differenza è importante se si utilizzano stringhe Unicode.  
  
-   Usare le versioni portabili delle funzioni di runtime del linguaggio C che gestiscono le stringhe.  
  
-   Utilizzare i seguenti tipi di dati per i caratteri e i puntatori ai caratteri:  
  
    -   `TCHAR` dove è possibile utilizzare `char`.  
  
    -   `LPTSTR` dove è possibile utilizzare `char*`.  
  
    -   `LPCTSTR` dove è possibile utilizzare `const char*`.  `CString` fornisce l'operatore `LPCTSTR` per eseguire la conversione tra `CString` e `LPCTSTR`.  
  
 `CString` fornisce inoltre costruttori, operatori di assegnazione e operatori di confronto che riconoscono il formato Unicode.  
  
 Per informazioni relative alla programmazione Unicode, vedere [Argomenti Unicode](../mfc/unicode-in-mfc.md).  Il [riferimento alla libreria di runtime](../c-runtime-library/c-run-time-library-reference.md) definisce le versioni portabili di tutte le funzioni di gestione delle stringhe.  Vedere la categoria [Internazionalizzazione](../c-runtime-library/internationalization.md).  
  
##  <a name="_core_mfc_support_for_mbcs_strings"></a> Supporto MFC per le stringhe MBCS  
  
> [!WARNING]
>  Le stringhe MBCS rappresentano una tecnologia legacy e non dovrebbero essere utilizzate in nuovi progetti.  Le informazioni seguenti vengono fornite per gli scenari in cui è necessario mantenere il codice esistente che utilizza il formato MBCS e non è possibile aggiornare il codice per utilizzare Unicode.  
  
 La libreria di classe è anche compatibile con i set di caratteri multibyte, ma solo per i set di caratteri a byte doppio \(DBCS\).  
  
> [!IMPORTANT]
>  In [!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)] e versioni successive, le versioni MBCS delle DLL MFC sono disponibili come componente aggiuntivo gratuito per Visual Studio dal sito di download di MSDN.  Per ulteriori informazioni, vedere [Componente aggiuntivo MBCS di DLL MFC](../mfc/mfc-mbcs-dll-add-on.md).  
  
 In un set di caratteri multibyte, un carattere può essere grande uno o due byte.  Se è a due byte, il primo byte è un "byte iniziale" speciale che viene scelto all'interno di un determinato intervallo, a seconda della tabella codici utilizzata.  Nel loro insieme,il byte iniziale e i "byte finali" specificano una codifica univoca dei caratteri.  
  
 Se il simbolo `_MBCS` è definito per una build del programma, il tipo `TCHAR`, su cui è basata `CString`, corrisponde a `char`.  È l'utente a determinare quali byte in un oggetto di tipo `CString` sono i byte iniziali e quali sono i byte finali.  La libreria di runtime del linguaggio C fornisce funzione per determinarlo.  
  
 Utilizzando DBCS, una stringa specificata può contenere tutti i caratteri ANSI a byte singolo, tutti i caratteri a byte doppio, o una combinazione dei due.  Queste possibilità richiedono una gestione speciale del parsing delle stringhe.  Ciò include gli oggetti `CString`.  
  
> [!NOTE]
>  La serializzazione delle stringhe Unicode in MFC può leggere sia le stringhe Unicode che MBCS indipendentemente da quale versione dell'applicazione sia in esecuzione.  I file di dati sono portabili tra le versioni Unicode e MBCS del programma.  
  
 Le funzioni membro di `CString` utilizzano una speciale versione "a testo generico" delle funzioni di runtime del linguaggio C che chiamano, o utilizzano funzioni che supportano il formato Unicode.  Di conseguenza, ad esempio, se una funzione `CString` in genere ha chiamato `strcmp`, chiama la funzione corrispondente di testo generico `_tcscmp` anziché.  A seconda di come sono definiti i simboli `_MBCS` e `_UNICODE`, `_tcscmp` corrisponde ai seguenti simboli:  
  
|||  
|-|-|  
|`_MBCS` è definito|`_mbscmp`|  
|`_UNICODE` è definito|`wcscmp`|  
|Nessuno dei due simboli è definito|`strcmp`|  
  
> [!NOTE]
>  I simboli `_MBCS` e `_UNICODE` si escludono reciprocamente.  
  
 Le corrispondenze delle funzioni a testo generico per tutte le routine per la gestione delle stringhe sono trattate in [Riferimenti alla libreria di runtime C](../c-runtime-library/c-run-time-library-reference.md).  In particolare, vedere [Internazionalizzazione](../c-runtime-library/internationalization.md).  
  
 Analogamente, i metodi di `CString` vengono implementati tramite corrispondenze tra tipi di dati generici.  Per attivare sia il formato MBCS che il formato Unicode, MFC utilizza `TCHAR` per `char`, `LPTSTR` per `char*` e `LPCTSTR` per `const char*`.  Ciò fornisce le corrispondenze corrette sia per il formato MBCS che per il formato Unicode.  
  
## Vedere anche  
 [Stringhe](../atl-mfc-shared/strings-atl-mfc.md)   
 [Modifica di stringhe](../c-runtime-library/string-manipulation-crt.md)