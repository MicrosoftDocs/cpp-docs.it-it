---
description: 'Altre informazioni su: stampa a livello di codice'
title: Stampa a livello di codice
ms.date: 11/04/2016
helpviewer_keywords:
- printing [MFC], active documents
- active documents [MFC], printing
- printing [MFC], programmatic
- IPrint interface
- printing [MFC]
ms.assetid: 3db0945b-5e13-4be4-86a0-6aecdae565bd
ms.openlocfilehash: c97a3938a97970e1479add4f62b68250845ba7e1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154695"
---
# <a name="programmatic-printing"></a>Stampa a livello di codice

OLE fornisce i mezzi per identificare in modo univoco i documenti permanenti ( `GetClassFile` ) e caricarli nel codice associato (,,, `CoCreateInstance` `QueryInterface(IID_IPersistFile)` `QueryInterface(IID_IPersistStorage)` `IPersistFile::Load` e `IPersistStorage::Load` ). Per abilitare ulteriormente la stampa di documenti, il contenimento dei documenti attivi (utilizzando una progettazione OLE esistente non fornita con OLE 2,0 originariamente) introduce un'interfaccia di stampa standard di base, `IPrint` , disponibile a livello generale tramite qualsiasi oggetto che possa caricare lo stato persistente del tipo di documento. Ogni visualizzazione di un documento attivo può supportare facoltativamente l' `IPrint` interfaccia per fornire queste funzionalità.

L'interfaccia di `IPrint` è definita come segue:

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

I client e i contenitori utilizzano semplicemente `IPrint::Print` per indicare al documento di stamparsi dopo il caricamento del documento, specificando i flag di controllo di stampa, il dispositivo di destinazione, le pagine da stampare e le opzioni aggiuntive. Il client può anche controllare la continuazione della stampa tramite l'interfaccia `IContinueCallback` (vedere di seguito).

Inoltre, `IPrint::SetInitialPageNum` supporta la possibilità di stampare una serie di documenti come una numerazione di pagine senza interruzioni, ovviamente un vantaggio per i contenitori di documenti attivi come binder di Office. `IPrint::GetPageInfo` semplifica la visualizzazione delle informazioni di paginazione consentendo al chiamante di recuperare il numero di pagina iniziale passato in precedenza `SetInitialPageNum` (o il numero di pagina iniziale predefinito interno del documento) e il numero di pagine nel documento.

Gli oggetti che supportano `IPrint` sono contrassegnati nel registro di sistema con la chiave "stampabile" archiviata nel CLSID dell'oggetto:

HKEY_CLASSES_ROOT\CLSID\\ {...} \Printable

`IPrint` viene in genere implementato nello stesso oggetto che supporta `IPersistFile` o `IPersistStorage` . I chiamanti notano la funzionalità di stampa a livello di codice dello stato persistente di una classe cercando nel registro di sistema la chiave "stampabile". Attualmente, "stampabile" indica il supporto per almeno. `IPrint` altre interfacce possono essere definite in futuro, che saranno quindi disponibili tramite `QueryInterface` dove `IPrint` rappresenta semplicemente il livello di supporto di base.

Durante una procedura di stampa, è possibile che si desideri che il client o il contenitore che ha avviato la stampa controllino se la stampa deve continuare. Ad esempio, il contenitore può supportare un comando "arresta stampa" che deve terminare il processo di stampa il prima possibile. Per supportare questa funzionalità, il client di un oggetto stampabile può implementare un piccolo oggetto sink di notifica con l'interfaccia `IContinueCallback` :

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

Questa interfaccia è progettata per essere utile come funzione di callback di continuazione generica che prende il posto delle varie procedure di continuazione nell'API Win32 (ad esempio, `AbortProc` per la stampa e l' `EnumMetafileProc` enumerazione for Metafile). Questa progettazione dell'interfaccia è quindi utile in un'ampia gamma di processi che richiedono molto tempo.

Nei casi più generici, la `IContinueCallback::FContinue` funzione viene chiamata periodicamente da qualsiasi processo lungo. L'oggetto sink restituisce S_OK per continuare l'operazione e S_FALSE per arrestare la procedura appena possibile.

`FContinue`, tuttavia, non viene usato nel contesto di `IPrint::Print` , bensì la stampa USA `IContinueCallback::FContinuePrint` . Qualsiasi oggetto di stampa deve chiamare periodicamente il `FContinuePrinting` passaggio del numero di pagine stampate, il numero della pagina da stampare e una stringa aggiuntiva che descrive lo stato di stampa che il client può scegliere di visualizzare per l'utente (ad esempio "pagina 5 di 19").

## <a name="see-also"></a>Vedi anche

[Contenitori documenti attivi](../mfc/active-document-containers.md)
