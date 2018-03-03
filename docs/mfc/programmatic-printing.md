---
title: Stampa a livello di codice | Documenti Microsoft
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
- printing [MFC], active documents
- active documents [MFC], printing
- printing [MFC], programmatic
- IPrint interface
- printing [MFC]
ms.assetid: 3db0945b-5e13-4be4-86a0-6aecdae565bd
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 927a5d9b4bea41157c8cfac6f3dbfe42fc323bb2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="programmatic-printing"></a>Stampa a livello di codice
OLE fornito i mezzi per identificare in modo permanente documenti (**GetClassFile**) e caricarli nel relativo codice associato (`CoCreateInstance`, **QueryInterface**, **Iid_ipersiststorage**, **IPersistFile:: Load**, e **IPersistStorage:: Load**). Per migliorare ulteriormente la stampa di documenti, contenimento dei documenti attivi (tramite una progettazione OLE esistente non fornita con OLE 2.0 originariamente) introdotta un'interfaccia di stampa standard di base, `IPrint`, in genere disponibili tramite qualsiasi oggetto in grado di caricare il stato persistente del tipo di documento. Ogni vista di un documento attivo può supportare facoltativamente il **IPrint** interfaccia per fornire queste funzionalità.  
  
 Il `IPrint` interfaccia sia definita come segue:  
  
```  
interface IPrint : IUnknown  
    {  
    HRESULT SetInitialPageNum([in] LONG nFirstPage);  
    HRESULT GetPageInfo(  
        [out] LONG *pnFirstPage,  
        [out] LONG *pcPages);  
    HRESULT Print(  
        [in] DWORD grfFlags,  
        [in,out] DVTARGETDEVICE **pptd,  
        [in,out] PAGESET ** ppPageSet,  
        [in,out] STGMEDIUM **ppstgmOptions,  
        [in] IContinueCallback* pCallback,  
        [in] LONG nFirstPage,  
        [out] LONG *pcPagesPrinted,  
        [out] LONG *pnPageLast);  
    };  
```  
  
 I client e i contenitori utilizzano semplicemente **IPrint:: Print** per indicare il documento Stampa una volta che il documento viene caricato, che specifica i flag di controllo di stampa, il dispositivo di destinazione, le pagine da stampare e altre opzioni. Il client può anche controllare la continuazione di stampa tramite l'interfaccia `IContinueCallback` (vedere sotto).  
  
 Inoltre, **IPrint::SetInitialPageNum** supporta la possibilità di stampare una serie di documenti, come una numerazione di pagine senza problemi, ovviamente un vantaggio per contenitori documenti attivi come Raccoglitore di Office. **IPrint:: GetPageInfo** in precedenza è stato passato al numero di pagina rende la visualizzazione di informazioni sull'impaginazione semplice consentendo al chiamante di recuperare il tipo di avvio **SetInitialPageNum** (o valore predefinito interno del documento numero di pagina iniziale) e il numero di pagine del documento.  
  
 Gli oggetti che supportano `IPrint` sono contrassegnati nel Registro di sistema con la chiave "Printable" archiviata sotto il CLSID dell'oggetto:  
  
 HKEY_CLASSES_ROOT\CLSID\\{...} \Printable  
  
 `IPrint`in genere è implementato nello stesso oggetto che supporta uno `IPersistFile` o `IPersistStorage`. I chiamanti si noti la funzionalità di stampa a livello di codice lo stato persistente di alcune classi cercando nel Registro di sistema per la chiave "Printable". Attualmente, "Stampabili" indica il supporto per almeno `IPrint`; le altre interfacce possono essere definite in futuro saranno rese disponibili tramite `QueryInterface` in **IPrint** rappresenta semplicemente il livello di base del supporto.  
  
 Durante una procedura di stampa è il client o il contenitore che ha avviato la stampa per controllare o meno la stampa è deve continuare. Ad esempio, il contenitore può supportare un comando "Arresta Print" che deve terminare il processo di stampa appena possibile. Per supportare questa funzionalità, il client di un oggetto stampabile può implementare un oggetto sink di notifica di piccole dimensioni con l'interfaccia `IContinueCallback`:  
  
```  
interface IContinueCallback : IUnknown  
    {  
    HRESULT FContinue(void);  
    HRESULT FContinuePrinting(  
        [in] LONG cPagesPrinted,  
        [in] LONG nCurrentPage,  
        [in] LPOLESTR pszPrintStatus);  
    };  
```  
  
 Questa interfaccia è progettata per essere utili come una funzione di callback di continuazione generico che ha luogo delle varie procedure continuazione nell'API Win32 (ad esempio il **AbortProc** per la stampa e  **EnumMetafileProc** per l'enumerazione del metafile). Pertanto, questa progettazione dell'interfaccia è utile in una vasta gamma di processi richiede molto tempo.  
  
 Nei casi più generici, la **IContinueCallback:: FContinue** funzione viene chiamata periodicamente da qualsiasi processo di lunga durata. Restituisce l'oggetto sink `S_OK` per continuare l'operazione, e **S_FALSE** per interrompere la procedura appena possibile.  
  
 **FContinue**, tuttavia, non viene usato nel contesto di **IPrint:: Print**; piuttosto, stampa utilizza **IContinueCallback::FContinuePrint**. Qualsiasi oggetto di stampa deve chiamare periodicamente **FContinuePrinting** passando una stringa aggiuntiva che descrive lo stato di stampato che il client, il numero della pagina da stampare e il numero di pagine che sono state stampate scegliere di visualizzare all'utente (ad esempio "pagina 5 di 19").  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori documenti attivi](../mfc/active-document-containers.md)

