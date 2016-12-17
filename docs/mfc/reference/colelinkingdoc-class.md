---
title: "COleLinkingDoc Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleLinkingDoc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleLinkingDoc class"
  - "OLE containers, client items"
ms.assetid: 9f547f35-2f95-427f-b9c0-85c31940198b
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleLinkingDoc Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe base per i documenti del contenitore OLE che supportano l'accesso agli elementi incorporati contengono.  
  
## Sintassi  
  
```  
class COleLinkingDoc : public COleDocument  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleLinkingDoc::COleLinkingDoc](../Topic/COleLinkingDoc::COleLinkingDoc.md)|Costruisce un oggetto `COleLinkingDoc`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleLinkingDoc::Register](../Topic/COleLinkingDoc::Register.md)|Registra il documento con le DLL di sistema OLE.|  
|[COleLinkingDoc::Revoke](../Topic/COleLinkingDoc::Revoke.md)|Revoca la registrazione del documento.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleLinkingDoc::OnFindEmbeddedItem](../Topic/COleLinkingDoc::OnFindEmbeddedItem.md)|Trova l'elemento incorporato specificato.|  
|[COleLinkingDoc::OnGetLinkedItem](../Topic/COleLinkingDoc::OnGetLinkedItem.md)|Trovare l'elemento collegato specificato.|  
  
## Note  
 Un'applicazione contenitore che supporta il collegamento agli elementi incorporati è denominata "un contenitore di collegamento". L'applicazione di esempio [OCLIENT](../../top/visual-cpp-samples.md) è un esempio di un contenitore di collegamento.  
  
 Quando l'origine di un elemento collegato a un elemento incorporato in un altro documento, il documento che deve essere caricato in modo che l'elemento incorporato da modificare.  Per questo motivo, un contenitore di collegamento deve poter essere avviato da un'altra applicazione contenitore quando l'utente desidera modificare l'origine di un elemento collegato.  L'applicazione deve utilizzare la classe [COleTemplateServer](../../mfc/reference/coletemplateserver-class.md) in modo da poter creare documenti una volta avviata a livello di codice.  
  
 Per rendere al contenitore un contenitore di collegamento, derivare la classe del documento da `COleLinkingDoc` anziché [COleDocument](../../mfc/reference/coledocument-class.md).  Come con qualsiasi altro contenitore OLE, è necessario progettare la classe per archiviare i dati nativi dell'applicazione nonché incorporato o elementi collegati.  Inoltre, è necessario progettare le strutture di dati per archiviare i dati nativi.  Se si definisce `CDocItem`nella classe derivata da per i dati nativi dell'applicazione, è possibile utilizzare l'interfaccia definita da `COleDocument` per memorizzare i dati nativi nonché i dati OLE.  
  
 Per consentire l'applicazione essere avviato a livello di codice da un altro contenitore, dichiarare un oggetto `COleTemplateServer` come membro `CWinApp`dell'applicazione classe derivata:  
  
 [!code-cpp[NVC_MFCOleContainer#23](../../mfc/codesnippet/CPP/colelinkingdoc-class_1.h)]  
  
 Nella funzione membro del `CWinApp`classe derivata `InitInstance`, creare un modello di documento e specificare il `COleLinkingDoc`classe derivata dalla classe del documento:  
  
 [!code-cpp[NVC_MFCOleContainer#24](../../mfc/codesnippet/CPP/colelinkingdoc-class_2.cpp)]  
  
 Connettere l'oggetto `COleTemplateServer` ai modelli di documento chiamando la funzione membro `ConnectTemplate` dell'oggetto e registrare tutti gli oggetti della classe con il sistema OLE chiamando **COleTemplateServer::RegisterAll**:  
  
 [!code-cpp[NVC_MFCOleContainer#25](../../mfc/codesnippet/CPP/colelinkingdoc-class_3.cpp)]  
  
 Per un esempio `CWinApp`alla definizione della classe derivata e la funzione `InitInstance`, vedere OCLIENT.H e OCLIENT.CPP nell'esempio [OCLIENT](../../top/visual-cpp-samples.md)MFC.  
  
 Per ulteriori informazioni su l `COleLinkingDoc`, vedere gli articoli [contenitori: implementare un contenitore](../../mfc/containers-implementing-a-container.md) e [contenitori: funzionalità avanzate](../../mfc/containers-advanced-features.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocument](../../mfc/reference/cdocument-class.md)  
  
 [COleDocument](../../mfc/reference/coledocument-class.md)  
  
 `COleLinkingDoc`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [Esempio OCLIENT MFC](../../top/visual-cpp-samples.md)   
 [COleDocument Class](../../mfc/reference/coledocument-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)