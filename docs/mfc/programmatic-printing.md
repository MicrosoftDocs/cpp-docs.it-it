---
title: "Stampa a livello di codice | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "documenti attivi [C++], stampa"
  - "IPrint (interfaccia)"
  - "stampa [MFC]"
  - "stampa [MFC], documenti attivi"
  - "stampa [MFC], a livello di codice"
ms.assetid: 3db0945b-5e13-4be4-86a0-6aecdae565bd
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stampa a livello di codice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

OLE fornisce i mezzi per identificare in modo univoco i documenti salvati \(**GetClassFile**\) e caricarli nel codice collegato \(`CoCreateInstance`, **QueryInterface\(IID\_IPersistFile\)**, **QueryInterface\(IID\_IPersistStorage\)**, **IPersistFile::Load** e **IPersistStorage::Load**\).  Per abilitare ulteriormente i documenti da stampare, il contenimento di documenti attivi \(utilizzando una progettazione OLE esistente non fornite tramite OLE originariamente 2,0\) introduce un'interfaccia di stampa relativa allo standard, `IPrint`, generalmente resa disponibile con qualsiasi oggetto che può caricare lo stato persistente tipo di documento.  Ogni visualizzazione del documento attivo può supportare l'interfaccia di **IPrint** per fornire queste funzionalità.  
  
 L'interfaccia di `IPrint` viene definita come segue:  
  
 `interface IPrint : IUnknown`  
  
 `{`  
  
 `HRESULT SetInitialPageNum([in] LONG nFirstPage);`  
  
 `HRESULT GetPageInfo(`  
  
 `[out] LONG *pnFirstPage,`  
  
 `[out] LONG *pcPages);`  
  
 `HRESULT Print(`  
  
 `[in] DWORD grfFlags,`  
  
 `[in,out] DVTARGETDEVICE **pptd,`  
  
 `[in,out] PAGESET ** ppPageSet,`  
  
 `[in,out] STGMEDIUM **ppstgmOptions,`  
  
 `[in] IContinueCallback* pCallback,`  
  
 `[in] LONG nFirstPage,`  
  
 `[out] LONG *pcPagesPrinted,`  
  
 `[out] LONG *pnPageLast);`  
  
 `};`  
  
 Utilizzo **IPrint::Print** di contenitori e i client è sufficiente indicare al documento per stamparsi quando il documento viene caricato, specificando i flag di controllo di stampa, il dispositivo di destinazione, le pagine da stampare e opzioni aggiuntive.  Il client può inoltre possibile controllare la continuazione di stampa tramite l'interfaccia `IContinueCallback` \(vedere di seguito\).  
  
 Inoltre, **IPrint::SetInitialPageNum** supporta la stampa una serie di documenti quando uno numerando le pagine senza problemi, un vantaggio per i contenitori di documenti attivi sono direttamente il Raccoglitore microsoft Office.  **IPrint::GetPageInfo** consente di visualizzare le informazioni di paginazione semplice consentendo al chiamante di recuperare il numero di pagina iniziale in precedenza passato a **SetInitialPageNum** \(o il numero di pagina iniziale predefinito interno di documento\) e il numero di pagine nel documento.  
  
 Gli oggetti che supportano `IPrint` vengono contrassegnati nel Registro di sistema nella chiave "stampabile" archiviata nel CLSID di oggetti:  
  
 HKEY\_CLASSES\_ROOT\\CLSID\\{...}\\Printable  
  
 `IPrint` in genere viene implementato nello stesso oggetto che supporti `IPersistFile` o `IPersistStorage`.  I chiamanti notare la funzionalità a livello di codice stampare lo stato persistente di classi visualizzato nel Registro di sistema per la chiave "stampabile".  Attualmente, "stampabile" indica il supporto almeno a `IPrint`; altre interfacce possono essere definite in futuro che quindi è disponibile con `QueryInterface` in cui **IPrint** rappresenta semplicemente il livello di base di supporto.  
  
 Durante la procedura di stampa, è possibile utilizzare il client o nel contenitore che ha avviato la stampa per controllare se la stampa deve continuare.  Ad esempio, il contenitore può supportare un comando "stop" stampa che deve terminare il processo di stampa il prima possibile.  Per supportare queste funzionalità, il client di un oggetto stampabile può implementare un piccolo oggetto sink di notifica con l'interfaccia `IContinueCallback`:  
  
 `interface IContinueCallback : IUnknown`  
  
 `{`  
  
 `HRESULT FContinue(void);`  
  
 `HRESULT FContinuePrinting(`  
  
 `[in] LONG cPagesPrinted,`  
  
 `[in] LONG nCurrentPage,`  
  
 `[in] LPOLESTR pszPrintStatus);`  
  
 `};`  
  
 Questa interfaccia è progettata per essere utile come funzione di callback generica di continuazione in cui le varie procedure di continuazione nell'API Win32 come **AbortProc** per la stampa e **EnumMetafileProc** per l'enumerazione metafile\).  Pertanto questa progettazione di un'interfaccia è utile in un'ampia varietà di processi parecchio tempo.  
  
 Nei casi più generici, la funzione di **IContinueCallback::FContinue** è denominata periodicamente da qualsiasi lungo processo.  L'oggetto sink restituisce `S_OK` per proseguire l'operazione e **S\_FALSE** per interrompere la routine il prima possibile.  
  
 **FContinue**, tuttavia, non utilizzato nel contesto di **IPrint::Print**; invece, la stampa utilizza **IContinueCallback::FContinuePrint**.  Qualsiasi oggetto di stampa deve chiamare periodicamente **FContinuePrinting** che passa il numero di pagine che stanno stampa, il numero di pagine che viene stampata e una stringa aggiuntiva che descrive lo stato di stampa che il client può scegliere di visualizzare all'utente \(ad esempio "pagina 5 a 19 "\).  
  
## Vedere anche  
 [Contenitore documenti attivi](../mfc/active-document-containers.md)