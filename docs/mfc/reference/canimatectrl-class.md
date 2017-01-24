---
title: "CAnimateCtrl Class | Microsoft Docs"
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
  - "CAnimateCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "animation controls [C++], CAnimateCtrl class"
  - "CAnimateCtrl class"
  - "Windows common controls [C++], CAnimateCtrl class"
ms.assetid: 5e8eb1bd-96b7-47b8-8de2-6bcbb3cc299b
caps.latest.revision: 25
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAnimateCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce funzionalità del controllo animazione comuni di Windows.  
  
## Sintassi  
  
```  
  
class CAnimateCtrl : public CWnd  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimateCtrl::CAnimateCtrl](../Topic/CAnimateCtrl::CAnimateCtrl.md)|Costruisce un oggetto `CAnimateCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimateCtrl::Close](../Topic/CAnimateCtrl::Close.md)|Chiude il clip AVI.|  
|[CAnimateCtrl::Create](../Topic/CAnimateCtrl::Create.md)|Crea un controllo animazione e lo collega a un oggetto `CAnimateCtrl`.|  
|[CAnimateCtrl::CreateEx](../Topic/CAnimateCtrl::CreateEx.md)|Crea un controllo animazione con gli stili estesi Windows specificati e lo collega a un oggetto `CAnimateCtrl`.|  
|[CAnimateCtrl::IsPlaying](../Topic/CAnimateCtrl::IsPlaying.md)|Indica se un Audio\- Visualizzato con interfoliazione il clip di \(AVI\) viene riprodotto.|  
|[CAnimateCtrl::Open](../Topic/CAnimateCtrl::Open.md)|Apre un clip AVI di un file o una risorsa e visualizzare il primo fotogramma.|  
|[CAnimateCtrl::Play](../Topic/CAnimateCtrl::Play.md)|Riproduce il clip AVI senza suono.|  
|[CAnimateCtrl::Seek](../Topic/CAnimateCtrl::Seek.md)|Visualizzare un singolo frame selezionato di visualizzazione AVI.|  
|[CAnimateCtrl::Stop](../Topic/CAnimateCtrl::Stop.md)|Arresto di riprodurre il clip AVI.|  
  
## Note  
 Questo controllo \(e la classe `CAnimateCtrl`\) è disponibile solo per i programmi in esecuzione in versioni 3,51 con Windows 95, Windows 98 e Windows NT e successive.  
  
 Un controllo animazione è una finestra rettangolare che visualizza un clip nel formato di AVI \(audio visualizzare interfoliazione\) la visualizzazione standard di Windows\/audio formato.  Un clip AVI è una serie di frame bitmap, ad esempio un filmato.  
  
 I controlli animazione possono riprodurre solo le parti AVI semplici.  In particolare, i clip multimediali da riprodurre da un controllo animazione devono soddisfare i seguenti requisiti:  
  
-   Deve essere esattamente un flusso visualizzare e deve disporre di almeno un frame.  
  
-   È possibile che al massimo due flussi nel file \(in genere un altro flusso, se presente, è un flusso audio, sebbene il controllo animazione ignorare informazioni audio\).  
  
-   Il clip non deve essere compresso o appiattito con compressione RLE8.  
  
-   Nessuna modifica della tavolozza è consentita nel flusso visualizzare.  
  
 È possibile aggiungere il clip AVI all'applicazione come risorsa di AVI, oppure può associare all'applicazione come file separato di AVI.  
  
 Poiché il thread continua a eseguire durante il AVI clip video, un utilizzo comune di un controllo animazione è di indicare l'attività di sistema durante un'operazione di lunga durata.  Ad esempio, nella finestra di dialogo trova di Esplora file visualizzare una lente di ingrandimento in movimento mentre il sistema cerca un file.  
  
 Se si crea un oggetto `CAnimateCtrl` di una finestra di dialogo o da una risorsa finestra di dialogo utilizzando l'editor finestre di dialogo, in viene distrutto quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un oggetto `CAnimateCtrl` interno di una finestra, potrebbe essere necessario distruggerla.  Se si crea l'oggetto `CAnimateCtrl` nello stack, verrà automaticamente eliminato.  Se si crea l'oggetto `CAnimateCtrl` nell'heap mediante la funzione **new**, è necessario chiamare **delete** sull'oggetto per distruggerlo.  Se si deriva una nuova classe da `CAnimateCtrl` e allocate qualsiasi memoria in questa classe, eseguire l'override del distruttore `CAnimateCtrl` per disporre le allocazioni.  
  
 Per ulteriori informazioni su l `CAnimateCtrl`, vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzando CAnimateCtrl](../../mfc/using-canimatectrl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CAnimateCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CAnimateCtrl::Create](../Topic/CAnimateCtrl::Create.md)   
 [ON\_CONTROL](../Topic/ON_CONTROL.md)