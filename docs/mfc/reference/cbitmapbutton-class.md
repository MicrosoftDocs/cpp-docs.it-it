---
title: "CBitmapButton Class | Microsoft Docs"
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
  - "CBitmapButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bitmap, button controls"
  - "pulsanti, bitmap"
  - "CBitmapButton class"
ms.assetid: 9ad6cb45-c3c4-4fb1-96d3-1fe3df7bbcfc
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CBitmapButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea controlli pulsante di contrassegnati con immagini destinate a bit anziché testo.  
  
## Sintassi  
  
```  
class CBitmapButton : public CButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBitmapButton::CBitmapButton](../Topic/CBitmapButton::CBitmapButton.md)|Costruisce un oggetto `CBitmapButton`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBitmapButton::AutoLoad](../Topic/CBitmapButton::AutoLoad.md)|Associa un pulsante in una finestra di dialogo con un oggetto classe `CBitmapButton`, carica le bitmap per nome e ridimensiona il pulsante alla bitmap.|  
|[CBitmapButton::LoadBitmaps](../Topic/CBitmapButton::LoadBitmaps.md)|Inizializza l'oggetto caricamento di una o più risorse bitmap denominata dal file di risorse dell'applicazione e connettendo le bitmap all'oggetto.|  
|[CBitmapButton::SizeToContent](../Topic/CBitmapButton::SizeToContent.md)|Ridimensiona il pulsante in modo da contenere una bitmap.|  
  
## Note  
 Gli oggetti di`CBitmapButton` contengono fino a quattro bitmap, che contengono le immagini per gli stati diversi che un pulsante può assumere: in \(o normale\), in basso o selezionato\), stato e disabilitato.  Solo la prima bitmap viene richiesta, in altri sono facoltativi.  
  
 Immagini di Bitmap\- pulsante includono il bordo intorno all'immagine e l'immagine stessa.  Il bordo in genere fa parte nel visualizzare lo stato del pulsante.  Ad esempio, la bitmap per lo stato attivato in genere è simile a quello per lo stato alto ma con un'operazione di inserimento tratteggiata del rettangolo dal bordo o da una linea continua spessa al bordo.  La bitmap per lo stato disabilitato in genere è simile a quello dello stato alto e di contrasto inferiore \(ad esempio una selezione di menu in grigio o ingrigita\).  
  
 Queste bitmap possono essere di qualsiasi dimensione, ma tutti vengono considerati come se fossero la stessa dimensione della bitmap per lo stato alto.  
  
 Varie applicazioni richiedono diverse combinazioni di immagini bitmap:  
  
|Su|Giù|Focused|Disabled|Applicazione|  
|--------|---------|-------------|--------------|------------------|  
|×||||Bitmap|  
|×|×|||Pulsante senza stile **WS\_TABSTOP**|  
|×|×|×|×|Pulsante della finestra di dialogo con tutte stati|  
|×|×|×||Pulsante della finestra di dialogo con stile **WS\_TABSTOP**|  
  
 Nel creare un controllo del bitmap\- pulsante, impostare lo stile **BS\_OWNERDRAW** per specificare che il pulsante viene creato dal proprietario.  Se si esegue Windows a inviare messaggi `WM_DRAWITEM` e `WM_MEASUREITEM` per il pulsante, il framework gestisce questi messaggi e gestisce l'aspetto del pulsante automaticamente.  
  
### Per creare un controllo del bitmap\- pulsante nell'area client di una finestra  
  
1.  Creare un'estensione a quattro immagini bitmap per il pulsante.  
  
2.  Creare l'oggetto [CBitmapButton](../Topic/CBitmapButton::CBitmapButton.md).  
  
3.  Chiamare la funzione [Crea](../Topic/CButton::Create.md) per creare il pulsante di Windows e per associarlo all'oggetto `CBitmapButton`.  
  
4.  Chiamare la funzione membro [LoadBitmaps](../Topic/CBitmapButton::LoadBitmaps.md) per caricare le risorse bitmap dopo il pulsante bitmap viene costruito.  
  
### Per includere un controllo di bitmap\- pulsante in una finestra di dialogo  
  
1.  Creare un'estensione a quattro immagini bitmap per il pulsante.  
  
2.  Creare un modello di finestra di dialogo con un pulsante del disegno personalizzato in cui si trova il pulsante bitmap.  La dimensione del pulsante nel modello non è rilevante.  
  
3.  Impostare la barra del titolo del pulsante su un valore come "**MYIMAGE**" e definire un simbolo del pulsante come **IDC\_MYIMAGE**.  
  
4.  In lo script di risorse dell'applicazione, immettere ognuna delle immagini create per il pulsante un ID costruito aggiungendo una delle lettere "U", "D", "f", o "X" \(per in, il basso, stato e disabilitato\) alla stringa utilizzata per la didascalia del pulsante al passaggio 3.  Per la barra del titolo "**MYIMAGE**il pulsante", ad esempio, gli ID è "**MYIMAGEU**,"**MYIMAGED**,"**MYIMAGEF**," e "**MYIMAGEX**". **must** specificare l'id delle bitmap racchiusi tra virgolette.  Nell'editor di risorse assegnare un valore intero nella risorsa e MFC non avrà esito positivo quando carica l'immagine.  
  
5.  Nella classe della finestra di dialogo dell'applicazione \(derivata da `CDialog`\), aggiungere un oggetto membro `CBitmapButton`.  
  
6.  Nella routine [OnInitDialog](../Topic/CDialog::OnInitDialog.md) dell'oggetto `CDialog`, chiamare la funzione [carico automatico](../Topic/CBitmapButton::AutoLoad.md) dell'oggetto `CBitmapButton`, utilizzando come parametri l'id del controllo pulsante e il puntatore **this** dell'oggetto `CDialog`.  
  
 Se si desidera gestire messaggi di notifica di Windows, ad esempio **BN\_CLICKED**, inviato da un controllo di bitmap\- pulsante al controllo padre \(in genere una classe derivata da **CDialog\)**, aggiunto a `CDialog`oggetto derivato da una voce della mappa messaggi e una funzione membro per la gestione dei messaggi per ogni messaggio.  Le notifiche inviate da un oggetto `CBitmapButton` sono uguali a quelle inviate da un oggetto [CButton](../../mfc/reference/cbutton-class.md).  
  
 La classe [CToolBar](../../mfc/reference/ctoolbar-class.md) adotta un approccio diverso ai pulsanti bitmap.  
  
 Per ulteriori informazioni su `CBitmapButton`, vedere[Controlli](../../mfc/controls-mfc.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 `CBitmapButton`  
  
## Requisiti  
 **Header:** afxext.h  
  
## Vedere anche  
 [MFC campione CTRLTEST](../../top/visual-cpp-samples.md)   
 [CButton Class](../../mfc/reference/cbutton-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)