---
title: "CStockPropImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CStockPropImpl"
  - "ATL::CStockPropImpl"
  - "ATL.CStockPropImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli [ATL], proprietà predefinite"
  - "CStockPropImpl class"
  - "proprietà predefinite, ATL (controlli)"
ms.assetid: 45f11d7d-6580-4a0e-872d-3bc8b836cfda
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CStockPropImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce i metodi per il supporto dei valori di proprietà predefiniti.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
class T,  
class InterfaceName,   
const IID* piid= &_ATL_IIDOF(InterfaceName),   
const GUID* plibid= &CComModule::m_libid,   
WORD wMajor= 1,  
WORD wMinor= 0,   
class tihclass= CcomTypeInfoHolder  
>  
class ATL_NO_VTABLE CStockPropImpl :  
public IDispatchImpl< InterfaceName, piid, plibid, wMajor,  
   wMinor, tihclass>  
```  
  
#### Parametri  
 `T`  
 La classe che implementa il controllo e che deriva da `CStockPropImpl`.  
  
 `InterfaceName`  
 Un'interfaccia duale che espone le proprietà predefinite.  
  
 `piid`  
 Un puntatore all'IID `InterfaceName`.  
  
 `plibid`  
 Un puntatore al LIBID della libreria dei tipi contenente la definizione `InterfaceName`.  
  
 `wMajor`  
 La versione principale della libreria dei tipi.  Il valore predefinito è 1.  
  
 `wMinor`  
 La versione secondaria della libreria dei tipi.  Il valore predefinito è 0.  
  
 `tihclass`  
 La classe utilizzata per gestire le informazioni sul tipo per `T`.  Il valore predefinito è `CComTypeInfoHolder`.  
  
## Membri  
  
### Metodi pubblici  
  
|||  
|-|-|  
|[get\_Appearance](../Topic/CStockPropImpl::get_Appearance.md)|Chiamare questo metodo per ottenere lo stile di disegno utilizzato dal controllo, ad esempio, il piano o da tridimensionale.|  
|[get\_AutoSize](../Topic/CStockPropImpl::get_AutoSize.md)|Chiamare questo metodo per ottenere lo stato del flag che indica se il controllo non può essere qualsiasi altra dimensione.|  
|[get\_BackColor](../Topic/CStockPropImpl::get_BackColor.md)|Chiamare questo metodo per ottenere il colore di sfondo del controllo.|  
|[get\_BackStyle](../Topic/CStockPropImpl::get_BackStyle.md)|Chiamare questo metodo per ottenere lo stile dello sfondo del controllo, trasparente o opaco.|  
|[get\_BorderColor](../Topic/CStockPropImpl::get_BorderColor.md)|Chiamare questo metodo per ottenere il colore del bordo del controllo.|  
|[get\_BorderStyle](../Topic/CStockPropImpl::get_BorderStyle.md)|Chiamare questo metodo per ottenere lo stile del bordo del controllo.|  
|[get\_BorderVisible](../Topic/CStockPropImpl::get_BorderVisible.md)|Chiamare questo metodo per ottenere lo stato del flag che indica se il bordo del controllo è visibile o meno.|  
|[get\_BorderWidth](../Topic/CStockPropImpl::get_BorderWidth.md)|Chiamare questo metodo per ottenere la larghezza \(in pixel\) del bordo del controllo.|  
|[get\_Caption](../Topic/CStockPropImpl::get_Caption.md)|Chiamare questo metodo per ottenere il testo specificato nella barra del titolo di un oggetto.|  
|[get\_DrawMode](../Topic/CStockPropImpl::get_DrawMode.md)|Chiamare questo metodo per ottenere la modalità di disegno del controllo, ad esempio, la penna di XOR o per invertire i colori.|  
|[get\_DrawStyle](../Topic/CStockPropImpl::get_DrawStyle.md)|Chiamare questo metodo per ottenere lo stile di disegno del controllo, ad esempio, il continuo, tratteggiato, o tratteggiato.|  
|[get\_DrawWidth](../Topic/CStockPropImpl::get_DrawWidth.md)|Chiamare questo metodo per ottenere la larghezza del disegno in pixel utilizzata con i metodi di disegno del controllo.|  
|[get\_Enabled](../Topic/CStockPropImpl::get_Enabled.md)|Chiamare questo metodo per ottenere lo stato del flag che indica se è attivato.|  
|[get\_FillColor](../Topic/CStockPropImpl::get_FillColor.md)|Chiamare questo metodo per ottenere il colore di riempimento del controllo.|  
|[get\_FillStyle](../Topic/CStockPropImpl::get_FillStyle.md)|Chiamare questo metodo per ottenere lo stile di riempimento del controllo, ad esempio, a tinta unita, trasparenti, o tra ha tratteggiato.|  
|[get\_Font](../Topic/CStockPropImpl::get_Font.md)|Chiamare questo metodo per ottenere un puntatore alle proprietà del controllo.|  
|[get\_ForeColor](../Topic/CStockPropImpl::get_ForeColor.md)|Chiamare questo metodo per ottenere il colore di primo piano del controllo.|  
|[get\_HWND](../Topic/CStockPropImpl::get_HWND.md)|Chiamare questo metodo per ottenere un handle della finestra associato al controllo.|  
|[get\_MouseIcon](../Topic/CStockPropImpl::get_MouseIcon.md)|Chiamare questo metodo per ottenere le proprietà dell'immagine di grafica \(icone, bitmap, o metafile\) da visualizzare quando il mouse si trova sopra il controllo.|  
|[get\_MousePointer](../Topic/CStockPropImpl::get_MousePointer.md)|Chiamare questo metodo per ottenere il tipo di puntatore del mouse viene visualizzato quando il mouse si trova sul controllo, ad esempio, la freccia, la croce, o una clessidra.|  
|[get\_Picture](../Topic/CStockPropImpl::get_Picture.md)|Chiamare questo metodo per ottenere un puntatore alle proprietà dell'immagine di un elemento grafico \(icone, bitmap, o metafile\) vengano visualizzati.|  
|[get\_ReadyState](../Topic/CStockPropImpl::get_ReadyState.md)|Chiamare questo metodo per ottenere lo stato pronto per il controllo, ad esempio, il carico o caricato.|  
|[get\_TabStop](../Topic/CStockPropImpl::get_TabStop.md)|Chiamare questo metodo per ottenere il flag che indica se il controllo è una tabulazione o meno.|  
|[get\_Text](../Topic/CStockPropImpl::get_Text.md)|Chiamare questo metodo per ottenere il testo visualizzato con il controllo.|  
|[get\_Valid](../Topic/CStockPropImpl::get_Valid.md)|Chiamare questo metodo per ottenere lo stato del flag che indica se il controllo è valido o meno.|  
|[get\_Window](../Topic/CStockPropImpl::get_Window.md)|Chiamare questo metodo per ottenere un handle della finestra associato al controllo.  Identico a [CStockPropImpl::get\_HWND](../Topic/CStockPropImpl::get_HWND.md).|  
|[put\_Appearance](../Topic/CStockPropImpl::put_Appearance.md)|Chiamare questo metodo per impostare lo stile di disegno utilizzato dal controllo, ad esempio, il piano o da tridimensionale.|  
|[put\_AutoSize](../Topic/CStockPropImpl::put_AutoSize.md)|Chiamare questo metodo per impostare il valore del flag che indica se il controllo non può essere qualsiasi altra dimensione.|  
|[put\_BackColor](../Topic/CStockPropImpl::put_BackColor.md)|Chiamare questo metodo per impostare il colore di sfondo del controllo.|  
|[put\_BackStyle](../Topic/CStockPropImpl::put_BackStyle.md)|Chiamare questo metodo per impostare lo stile dello sfondo del controllo.|  
|[put\_BorderColor](../Topic/CStockPropImpl::put_BorderColor.md)|Chiamare questo metodo per impostare il colore del bordo del controllo.|  
|[put\_BorderStyle](../Topic/CStockPropImpl::put_BorderStyle.md)|Chiamare questo metodo per impostare lo stile del bordo del controllo.|  
|[put\_BorderVisible](../Topic/CStockPropImpl::put_BorderVisible.md)|Chiamare questo metodo per impostare il valore del flag che indica se il bordo del controllo è visibile o meno.|  
|[put\_BorderWidth](../Topic/CStockPropImpl::put_BorderWidth.md)|Chiamare questo metodo per impostare la larghezza del bordo del controllo.|  
|[put\_Caption](../Topic/CStockPropImpl::put_Caption.md)|Chiamare questo metodo per impostare il testo da visualizzare con il controllo.|  
|[put\_DrawMode](../Topic/CStockPropImpl::put_DrawMode.md)|Chiamare questo metodo per impostare la modalità di disegno del controllo, ad esempio, la penna di XOR o per invertire i colori.|  
|[put\_DrawStyle](../Topic/CStockPropImpl::put_DrawStyle.md)|Chiamare questo metodo per impostare lo stile di disegno del controllo, ad esempio, il continuo, tratteggiato, o tratteggiato.|  
|[put\_DrawWidth](../Topic/CStockPropImpl::put_DrawWidth.md)|Chiamare questo metodo per impostare la larghezza \(in pixel\) utilizzata con i metodi di disegno del controllo.|  
|[put\_Enabled](../Topic/CStockPropImpl::put_Enabled.md)|Chiamare questo metodo per impostare il flag che indica se è attivato.|  
|[put\_FillColor](../Topic/CStockPropImpl::put_FillColor.md)|Chiamare questo metodo per impostare il colore di riempimento del controllo.|  
|[put\_FillStyle](../Topic/CStockPropImpl::put_FillStyle.md)|Chiamare questo metodo per impostare lo stile di riempimento del controllo, ad esempio, a tinta unita, trasparenti, o tra ha tratteggiato.|  
|[put\_Font](../Topic/CStockPropImpl::put_Font.md)|Chiamare questo metodo per impostare le proprietà del controllo.|  
|[put\_ForeColor](../Topic/CStockPropImpl::put_ForeColor.md)|Chiamare questo metodo per impostare il colore di primo piano del controllo.|  
|[put\_HWND](../Topic/CStockPropImpl::put_HWND.md)|Questo metodo restituisce E\_FAIL.|  
|[put\_MouseIcon](../Topic/CStockPropImpl::put_MouseIcon.md)|Chiamare questo metodo per impostare le proprietà dell'immagine di grafica \(icone, bitmap, o metafile\) da visualizzare quando il mouse si trova sopra il controllo.|  
|[put\_MousePointer](../Topic/CStockPropImpl::put_MousePointer.md)|Chiamare questo metodo per impostare il tipo di puntatore del mouse viene visualizzato quando il mouse si trova sul controllo, ad esempio, la freccia, la croce, o una clessidra.|  
|[put\_Picture](../Topic/CStockPropImpl::put_Picture.md)|Chiamare questo metodo per impostare le proprietà dell'immagine di un elemento grafico \(icone, bitmap, o metafile\) da visualizzare.|  
|[put\_ReadyState](../Topic/CStockPropImpl::put_ReadyState.md)|Chiamare questo metodo per impostare lo stato pronto per il controllo, ad esempio, caricare o caricato.|  
|[put\_TabStop](../Topic/CStockPropImpl::put_TabStop.md)|Chiamare questo metodo per impostare il valore del flag che indica se il controllo è una tabulazione o meno.|  
|[put\_Text](../Topic/CStockPropImpl::put_Text.md)|Chiamare questo metodo per impostare il testo visualizzato con il controllo.|  
|[put\_Valid](../Topic/CStockPropImpl::put_Valid.md)|Chiamare questo metodo per impostare il flag che indica se il controllo è valido o meno.|  
|[put\_Window](../Topic/CStockPropImpl::put_Window.md)|Questo metodo chiama [CStockPropImpl::put\_HWND](../Topic/CStockPropImpl::put_HWND.md), che restituisce E\_FAIL.|  
|[putref\_Font](../Topic/CStockPropImpl::putref_Font.md)|Chiamare questo metodo per impostare le proprietà del controllo, con un conteggio dei riferimenti.|  
|[putref\_MouseIcon](../Topic/CStockPropImpl::putref_MouseIcon.md)|Chiamare questo metodo per impostare le proprietà dell'immagine di grafica \(icone, bitmap, o metafile\) da visualizzare quando il mouse si trova sul controllo, con un conteggio dei riferimenti.|  
|[putref\_Picture](../Topic/CStockPropImpl::putref_Picture.md)|Chiamare questo metodo per impostare le proprietà dell'immagine di un elemento grafico \(icone, bitmap, o metafile\) da visualizzare, con un conteggio dei riferimenti.|  
  
## Note  
 `CStockPropImpl` fornisce **put** e i metodi **get** per ognuno di borsa la proprietà.  Questi metodi forniscono il codice necessario per impostare o ottenere il membro dati associato a ogni proprietà e per organizzare e sincronizzare con il contenitore quando tutte le modifiche delle proprietà.  
  
 Visual C\+\+ fornisce il supporto per le proprietà predefinite tramite le procedure guidate.  Per ulteriori informazioni sulle proprietà di azione a un controllo, vedere [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md).  
  
 Per la compatibilità con le versioni precedenti, `CStockPropImpl` espone anche rispettivamente `get_Window` e i metodi `put_Window` che chiama semplicemente `get_HWND` e `put_HWND`.  L'implementazione predefinita `put_HWND` restituisce **E\_FAIL** poiché `HWND` deve essere una proprietà di sola lettura.  
  
 Le proprietà seguenti presentano inoltre un'implementazione **putref** :  
  
-   Tipo di carattere  
  
-   MouseIcon  
  
-   Foto  
  
 Le stesse tre proprietà predefinite richiedono al membro dati corrispondente di essere di tipo `CComPtr` o di un'altra classe che fornisce il conteggio dei riferimenti corretto dell'interfaccia per l'utilizzo dell'operatore di assegnazione.  
  
## Gerarchia di ereditarietà  
 `T`  
  
 [IDispatchImpl](../../atl/reference/idispatchimpl-class.md)  
  
 `CStockPropImpl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)   
 [IDispatchImpl Class](../../atl/reference/idispatchimpl-class.md)