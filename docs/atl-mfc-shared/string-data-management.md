---
title: "String Data Management | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Unicode, string objects"
ms.assetid: 0b53a542-eeb1-4108-9ada-6700645b6f8f
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# String Data Management
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In Visual C\+\+ sono disponibili diversi modi per gestire i dati in formato stringa:  
  
-   [Modifica di stringhe](../c-runtime-library/string-manipulation-crt.md) per utilizzare le stringhe con terminazione null di tipo C  
  
-   Funzioni API Win32 per gestire le stringhe  
  
-   La classe [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md)di MFC, che fornisce oggetti stringa flessibili e ridimensionabili  
  
-   Classe [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md), che fornisce un oggetto stringa di MFC indipendente con la stessa funzionalità `CString`  
  
 Quasi tutte le operazioni di programmi con i dati in formato stringa.  La classe `CString` di MFC rappresenta spesso la soluzione migliore per gestione flessibile della stringa.  A partire dalla versione 7,0, `CString` può essere utilizzato in MFC o programmi di MFC indipendente.  La libreria di runtime che `CString` supportano le stringhe contenenti i caratteri \(wide\) multibyte, come nella programmazione Unicode o MBCS.  
  
 Questo articolo vengono descritti i servizi di utilizzo generale che la libreria di classi fornisce correlato a modifica delle stringhe.  Negli argomenti trattati in questo articolo sono:  
  
-   [Unicode e MBCS forniscono la portabilità](#_core_unicode_and_mbcs_provide_portability)  
  
-   [CStrings e const carbonizzano i puntatori](#_core_cstrings_and_const_char_pointers)  
  
-   [Conteggio dei riferimenti di CString](#_core_cstring_reference_counting)  
  
 La classe [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md) fornisce supporto per modificare le stringhe.  Consente di sostituire ed estendere la funzionalità generalmente fornita dal pacchetto della stringa della libreria di runtime del linguaggio C.  Le funzioni membro e gli operatori della classe fornisce `CString` per gestione semplificata della stringa, simili a quelle disponibili in base.  La classe fornisce inoltre costruttori e operatori per la costruzione, assegnare e confrontare **CStrings** e dati di tipo stringa C\+\+ standard.  Poiché `CString` non deriva da `CObject`, è possibile utilizzare gli oggetti `CString` indipendentemente dalla maggior parte della libreria Microsoft Foundation classes \(MFC\).  
  
 Gli oggetti di`CString` seguono "semantica di valore". Un oggetto `CString` rappresenta un valore univoco.  Pensare a `CString` come una stringa, non come puntatore a una stringa.  
  
 Un oggetto `CString` rappresenta una sequenza di numeri di caratteri variabile.  Gli oggetti di`CString` possono essere considerati come matrici di caratteri.  
  
##  <a name="_core_unicode_and_mbcs_provide_portability"></a> Unicode e MBCS forniscono la portabilità  
 Con le versioni di MFC 3,0 e versioni successive, MFC, inclusi `CString`, è abilitato sia per Unicode che il set di caratteri multibyte \(MBCS\).  Questo supporto è più semplice per scrivere applicazioni portabili che è possibile compilare per Unicode o caratteri ANSI.  Per attivare la portabilità, ogni carattere in un oggetto `CString` è di tipo **TCHAR**, definito come `wchar_t` se si definisce il simbolo **\_UNICODE** quando si compila un'applicazione, o come `char` caso contrario.  Un carattere `wchar_t` è 16 bit di.  MBCS viene attivato se compilate con il simbolo **\_MBCS** è stato definito.  La libreria MFC viene compilato con il simbolo **\_MBCS** \(per le raccolte di NAFX\) o il simbolo **\_UNICODE** \(per le raccolte di UAFX\) definito.  
  
> [!NOTE]
>  Esempi `CString` in questo e gli articoli associati alle stringhe visualizzate le stringhe effettive configurate per la portabilità Unicode, utilizzando la macro **\_T**, quale la traslazione la stringa letterale nel form:  
  
 `L"literal string"`  
  
> [!NOTE]
>  quale il compilatore considera come una stringa Unicode.  Ad esempio, il seguente codice:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#187](../atl-mfc-shared/codesnippet/CPP/string-data-management_1.cpp)]  
  
> [!NOTE]
>  viene convertito come stringa Unicode se **\_UNICODE** è definito o come stringa ANSI caso contrario.  Per ulteriori informazioni, vedere l'articolo [Supporto per set di caratteri Unicode e multibyte \(MBCS\)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).  
  
 Un oggetto `CString` può memorizzare fino a **INT\_MAX** \(2.147.483.647\) caratteri.  Il tipo di dati **TCHAR** viene utilizzato per ottenere o impostare i singoli caratteri in `CString` oggetto.  A differenza delle matrici di caratteri, la classe `CString` è incorporata una funzionalità di allocazione della memoria.  In questo modo gli oggetti `CString` automaticamente si sviluppino in base alle necessità ovvero non è necessario preoccuparsi della coltura dell'oggetto `CString` le stringhe più lunghe appropriate\).  
  
##  <a name="_core_cstrings_and_const_char_pointers"></a> CStrings e const carbonizzano i puntatori  
 Un oggetto `CString` inoltre può agire come una stringa di tipo C letterale \( `PCXSTR`, che è la stessa **const char\*** se non in Unicode\).  L'operatore di conversione [CSimpleStringT::operator PCXSTR](../Topic/CSimpleStringT::operator%20PCXSTR.md) consente oggetti `CString` da sostituire a per i puntatori di carattere nelle chiamate di funzione.  Il costruttore **CString\( LPCWSTR**`pszSrc`**\)** consente i puntatori di caratteri da sostituire a oggetti `CString`.  
  
 Viene eseguito alcun tentativo della riduzione gli oggetti `CString`.  Se si dispone di due oggetti `CString` che contengono `Chicago`, ad esempio, i caratteri in `Chicago` vengono archiviati in due posizioni.  Tale operazione non può essere true per le versioni future di MFC, pertanto non deve dipendere da\).  
  
> [!NOTE]
>  Utilizzare le funzioni membro [CSimpleStringT::ReleaseBuffer](../Topic/CSimpleStringT::ReleaseBuffer.md) e [CSimpleStringT::GetBuffer](../Topic/CSimpleStringT::GetBuffer.md) quando è necessario accedere direttamente a `CString` come puntatore non costante a un carattere.  
  
> [!NOTE]
>  Utilizzare le funzioni membro [CStringT::SetSysString](../Topic/CStringT::SetSysString.md) e [CStringT::AllocSysString](../Topic/CStringT::AllocSysString.md) per allocare e impostare gli oggetti `BSTR` utilizzati in automazione \(precedentemente nota come automazione OLE\).  
  
> [!NOTE]
>  Laddove possibile allocare gli oggetti `CString` sul frame anziché nell'heap.  Per salvare la memoria e semplifica il passaggio dei parametri.  
  
 La classe `CString` non viene implementata come classe di raccolte della libreria MFC, sebbene gli oggetti `CString` certamente possano essere archiviati come elementi delle raccolte.  
  
##  <a name="_core_cstring_reference_counting"></a> Conteggio dei riferimenti di CString  
 A partire dalla versione 4,0 di MFC, quando gli oggetti [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md) vengono copiati, MFC incrementa il conteggio dei riferimenti anziché copia dei dati.  In questo modo è possibile passare parametri per valore e restituire oggetti `CString` dal valore più efficiente.  Queste operazioni vengono visualizzati il costruttore di copia per essere chiamate talvolta più volte.  Incrementare il conteggio dei riferimenti si riduce il sovraccarico per queste operazioni comuni e fa tramite `CString` un'opzione più facilità.  
  
 In ogni copia viene eliminato, il conteggio dei riferimenti nell'oggetto originale viene decrementato.  L'oggetto `CString` di originale non viene eliminato fino a ridurre il conteggio dei riferimenti a zero.  
  
 È possibile utilizzare le funzioni membro [CSimpleStringT::LockBuffer](../Topic/CSimpleStringT::LockBuffer.md) e [CSimpleStringT::UnlockBuffer](../Topic/CSimpleStringT::UnlockBuffer.md)`CString` per disabilitare o abilitare il conteggio dei riferimenti.  
  
## Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)