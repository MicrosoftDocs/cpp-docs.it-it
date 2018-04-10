---
title: Gestione dei dati di stringa | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- Unicode, string objects
ms.assetid: 0b53a542-eeb1-4108-9ada-6700645b6f8f
caps.latest.revision: 15
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ad7a17b1b34375fcb45019bcaf8878757288a290
ms.sourcegitcommit: 0523c88b24d963c33af0529e6ba85ad2c6ee5afb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/10/2018
---
# <a name="string-data-management"></a>Gestione dei dati di tipo stringa
Visual C++ fornisce diversi modi per gestire i dati di tipo stringa:  
  
-   [La manipolazione delle stringhe](../c-runtime-library/string-manipulation-crt.md) per l'utilizzo di stringhe in formato C con terminazione null  
  
-   Funzioni API Win32 per la gestione delle stringhe  
  
-   Classe MFC [classe CStringT](../atl-mfc-shared/reference/cstringt-class.md), che fornisce gli oggetti stringa flessibili e ridimensionabili  
  
-   Classe [classe CStringT](../atl-mfc-shared/reference/cstringt-class.md), che fornisce un oggetto stringa indipendente da MFC con la stessa funzionalità `CString`  
  
 Quasi tutti i programmi di lavoro con dati di tipo stringa. MFC `CString` classe è spesso la soluzione migliore per la gestione delle stringhe flessibile. A partire dalla versione 7.0, `CString` possono essere utilizzati in programmi MFC o non MFC. Sia la libreria di run-time e `CString` supporta le stringhe contenenti caratteri (wide) multibyte, come la programmazione Unicode e MBCS.  
  
 In questo articolo descrive i servizi di uso generale che la libreria di classi fornisce alla modifica di stringhe. Gli argomenti trattati in questo articolo includono:  
  
-   [Portabilità di Unicode e MBCS fornire](#_core_unicode_and_mbcs_provide_portability)  
  
-   [Oggetti CString e puntatori const char](#_core_cstrings_and_const_char_pointers)  
  
-   [Conteggio dei riferimenti di CString](#_core_cstring_reference_counting)  
  
 Il [classe CStringT](../atl-mfc-shared/reference/cstringt-class.md) classe offre supporto per la gestione delle stringhe. È destinato a sostituire ed estendere le funzionalità in genere fornita dal pacchetto di stringa della libreria di runtime C. La `CString` classe fornisce funzioni membro e operatori per la gestione semplificata delle stringhe, simili a quelle disponibili in Basic. La classe fornisce anche costruttori e operatori per la creazione, l'assegnazione e il confronto **oggetti CString** e tipi di dati stringa C++ standard. Poiché `CString` non è derivato da `CObject`, è possibile utilizzare `CString` oggetti indipendentemente dalla maggior parte di Microsoft Foundation classe libreria (MFC).  
  
 `CString` gli oggetti seguono "semantica dei valori". Oggetto `CString` oggetto rappresenta un valore univoco. Si consideri un `CString` come una stringa effettiva, non come un puntatore a una stringa.  
  
 Oggetto `CString` oggetto rappresenta una sequenza di un numero variabile di caratteri. `CString` gli oggetti possono essere considerati come matrici di caratteri.  
  
##  <a name="_core_unicode_and_mbcs_provide_portability"></a> Unicode e MBCS forniscono portabilità  
 Con MFC versione 3.0 e versioni successive, MFC, inclusi `CString`, è abilitata per Unicode e set di caratteri multibyte (MBCS). Questo supporto rende più semplice per la scrittura di applicazioni portabile che è possibile creare per i caratteri Unicode o ANSI. Per abilitare la portabilità, ogni carattere in un `CString` oggetto è di tipo **TCHAR**, che è definita come `wchar_t` se si definisce il simbolo **Unicode** quando si compila l'applicazione o come `char` in caso contrario. Oggetto `wchar_t` carattere è a 16 bit. Il formato MBCS è abilitato se si compila con il simbolo **MBCS** definito. MFC viene compilato con la **MBCS** simbolo (per le librerie NAFX) o **Unicode** definito (per le librerie UAFX).  
  
> [!NOTE]
>  Il `CString` esempi in questo e gli articoli di accompagnamento di stringhe Mostra le stringhe letterali formattate correttamente per la portabilità Unicode, utilizzando il **t** (macro), che converte il valore letterale stringa nel formato:  
  
 `L"literal string"`  
  
> [!NOTE]
>  che il compilatore considera come una stringa Unicode. Ad esempio, il seguente codice:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#187](../atl-mfc-shared/codesnippet/cpp/string-data-management_1.cpp)]  
  
> [!NOTE]
>  viene convertito come stringa Unicode se **Unicode** è definita o in un formato ANSI stringa se non. Per ulteriori informazioni, vedere l'articolo [supporto Unicode e impostare caratteri Multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).  
  
 Oggetto `CString` oggetto può archiviare fino a **INT_MAX** (2.147.483.647) caratteri. Il **TCHAR** il tipo di dati viene utilizzato per ottenere o impostare i singoli caratteri all'interno di un `CString` oggetto. A differenza delle matrici di caratteri, la `CString` classe è una funzionalità di allocazione di memoria interna. In questo modo `CString` gli oggetti di consente di aumentare automaticamente in base alle esigenze (ovvero, non è necessario preoccuparsi di crescita un `CString` oggetto in base a stringhe più lunghe).  
  
##  <a name="_core_cstrings_and_const_char_pointers"></a> Oggetti CString e puntatori const char  
 Oggetto `CString` oggetto può anche agire come una valore letterale stringa in formato C (un `PCXSTR`, ovvero lo stesso come **const char\***  se non in modalità Unicode). Il [CSimpleStringT::operator PCXSTR](../atl-mfc-shared/reference/csimplestringt-class.md#operator_pcxstr) consente l'operatore di conversione `CString` oggetti con cui sostituire liberamente i puntatori a caratteri in chiamate di funzione. Il **CString (LPCWSTR** `pszSrc` **)** costruttore consente di puntatori a caratteri con cui sostituire `CString` oggetti.  
  
 Viene eseguito alcun tentativo di riduzione `CString` oggetti. Se si apportano due `CString` oggetti contenenti `Chicago`, ad esempio, i caratteri in `Chicago` vengono archiviati in due posizioni. (Non è possibile nelle versioni future di MFC, pertanto è consigliabile non dipendono da esso.)  
  
> [!NOTE]
>  Utilizzare il [CSimpleStringT::GetBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) e [CSimpleStringT::ReleaseBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#releasebuffer) le funzioni membro quando è necessario accedere direttamente a un `CString` come un puntatore a un carattere non costante.  
  
> [!NOTE]
>  Utilizzare il [CStringT::AllocSysString](../atl-mfc-shared/reference/cstringt-class.md#allocsysstring) e [CStringT::SetSysString](../atl-mfc-shared/reference/cstringt-class.md#setsysstring) funzioni membro per allocare e impostare `BSTR` gli oggetti utilizzati in automazione (precedentemente nota come automazione OLE).  
  
> [!NOTE]
>  Dove possibile, allocare `CString` oggetti sul frame anziché sull'heap. Ciò, potrai risparmiare memoria e semplifica il passaggio di parametri.  
  
 Il `CString` classe non viene implementata come una classe collection libreria Microsoft Foundation Class, anche se `CString` è certamente possibile archiviare oggetti come elementi nelle raccolte.  
  
##  <a name="_core_cstring_reference_counting"></a> Conteggio dei riferimenti di CString  
 A partire dalla versione 4.0, MFC quando [classe CStringT](../atl-mfc-shared/reference/cstringt-class.md) gli oggetti vengono copiati, MFC con incrementi di un conteggio dei riferimenti, anziché copiare i dati. In questo modo, passaggio di parametri di valore e restituendo `CString` oggetti dal valore più efficiente. Queste operazioni che il costruttore di copia essere chiamato più volte di una volta. Incremento di un conteggio dei riferimenti riduce l'overhead per queste operazioni comuni e l'utilizzo di `CString` un'opzione più interessante.  
  
 Poiché ogni copia viene eliminata, il conteggio dei riferimenti nell'oggetto originale viene decrementato. Originale `CString` oggetto non viene eliminato fino a quando non si riduce il conteggio dei riferimenti a zero.  
  
 È possibile utilizzare il `CString` funzioni membro [CSimpleStringT::LockBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) e [CSimpleStringT::UnlockBuffer](../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) per disabilitare o abilitare il conteggio dei riferimenti.  
  
## <a name="see-also"></a>Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)

