---
title: Stampa a livello di codice | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- printing [MFC], active documents
- active documents [MFC], printing
- printing [MFC], programmatic
- IPrint interface
- printing [MFC]
ms.assetid: 3db0945b-5e13-4be4-86a0-6aecdae565bd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 527ecd89838702a3ec8a91c35e67c1c0cc26501e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46397834"
---
# <a name="programmatic-printing"></a>Stampa a livello di codice

OLE fornito i mezzi per identificare in modo permanenti documenti (`GetClassFile`) e caricare i file nel proprio codice associato (`CoCreateInstance`, `QueryInterface(IID_IPersistFile)`, `QueryInterface(IID_IPersistStorage)`, `IPersistFile::Load`, e `IPersistStorage::Load`). Per consentire la stampa di documenti, contenimento dei documenti attivi (usando una progettazione esistente OLE non fornita con OLE 2.0 originariamente) introdotta un'interfaccia di stampa standard di base, `IPrint`, disponibile a livello generale tramite qualsiasi oggetto che può caricare il stato persistente del tipo di documento. Ogni visualizzazione di un documento attivo può supportare facoltativamente il `IPrint` interfaccia per fornire queste funzionalità.

Il `IPrint` interfaccia viene definita come segue:

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

I client e i contenitori usano semplicemente `IPrint::Print` per indicare il documento venga stampato dopo che il documento viene caricato, specificando il flag di controllo di stampa, il dispositivo di destinazione, le pagine da stampare e le opzioni aggiuntive. Il client può inoltre controllare la continuazione di stampa tramite l'interfaccia `IContinueCallback` (vedere sotto).

Inoltre, `IPrint::SetInitialPageNum` supporta la possibilità di stampare una serie di documenti come una numerando pagine senza problemi, ovviamente un vantaggio per i contenitori documenti attivi come Raccoglitore di Office. `IPrint::GetPageInfo` in precedenza è stato passato al numero della pagina consente di visualizzare informazioni sulla paginazione semplice consentendo al chiamante recuperare il valore iniziale `SetInitialPageNum` (o predefinito interno del documento numero di pagina iniziale) e il numero di pagine del documento.

Gli oggetti che supportano `IPrint` sono contrassegnati con la chiave "Calcolo" archiviata sotto il CLSID dell'oggetto nel Registro di sistema:

HKEY_CLASSES_ROOT\CLSID\\{...} \Printable

`IPrint` in genere viene implementata nello stesso oggetto che supporta entrambi `IPersistFile` o `IPersistStorage`. I chiamanti tenere presente la possibilità di stampa a livello di codice lo stato persistente di alcune classi esaminando il Registro di sistema per la chiave "Calcolo". Attualmente, "Stampabili" indica il supporto per almeno `IPrint`; altre interfacce possono essere definite in futuro saranno rese disponibili attraverso `QueryInterface` in cui `IPrint` rappresenta semplicemente il livello di base del supporto.

Durante una procedura di stampa, è possibile il client o il contenitore che ha avviato la stampa per controllare o meno deve continuare la stampa. Ad esempio, il contenitore può supportare un comando "Arresta Print" che deve terminare il processo di stampa appena possibile. Per supportare questa funzionalità, il client di un oggetto stampabile può implementare un oggetto sink di notifica di piccole dimensioni con l'interfaccia `IContinueCallback`:

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

Questa interfaccia è progettata per essere utile come una funzione di callback di continuazione generico che accetta la posizione delle varie procedure continuazione nell'API Win32 (ad esempio la `AbortProc` per la stampa e `EnumMetafileProc` per l'enumerazione di metafile). Questa progettazione dell'interfaccia è pertanto utile in un'ampia gamma di processi che richiedono molto tempo.

Nei casi più generici, la `IContinueCallback::FContinue` funzione viene chiamata periodicamente da qualsiasi processo di lunga durata. L'oggetto sink restituisce S_OK per continuare l'operazione e S_FALSE per interrompere la procedura appena possibile.

`FContinue`, tuttavia, non viene usato nel contesto di `IPrint::Print`, ma piuttosto stampa Usa `IContinueCallback::FContinuePrint`. Qualsiasi oggetto stampa deve chiamare periodicamente `FContinuePrinting` passando il numero di pagine che sono state stampate, il numero della pagina da stampare e una stringa aggiuntiva che descrive lo stato di stampa che il client può scegliere di visualizzare all'utente (ad esempio, "Page 5 di 19").

## <a name="see-also"></a>Vedere anche

[Contenitori documenti attivi](../mfc/active-document-containers.md)

