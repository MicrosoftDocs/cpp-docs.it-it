---
title: "Opzioni, Creazione guidata controllo ATL | Microsoft Docs"
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
  - "vc.codewiz.class.atl.control.options"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata controllo ATL, opzioni"
ms.assetid: 4607c51a-992d-433e-9281-919c6f519a3d
caps.latest.revision: 14
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Opzioni, Creazione guidata controllo ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Inserire qui il riepilogo dei risultati di ricerca.  
  
 È possibile utilizzare questa schermata della procedura guidata per definire il tipo di controllo creato e il livello di supporto di interfaccia che contiene.  
  
## Elenco UIElement  
 **Tipo di controllo**  
 Il tipo di controllo che si desidera creare.  
  
-   **Controllo standard: un controllo ActiveX.**  
  
-   **Controllo composito**: un controllo ActiveX in grado di contenere \(in modo analogo a una finestra di dialogo\) altri controlli ActiveX o Windows.  Un controllo composito include i seguenti elementi:  
  
    -   Un modello per la finestra di dialogo che implementa il controllo composito.  
  
    -   Una risorsa personalizzata, REGISTRY, che registra automaticamente il controllo composito quando richiamato.  
  
    -   Una classe C\+\+ che implementa il controllo composito.  
  
    -   Un'interfaccia COM esposta dal controllo composito.  
  
    -   Una pagina di test HTML contenente il controllo composito.  
  
     Per impostazione predefinita, [CComControlBase::m\_bWindowOnly](../Topic/CComControlBase::m_bWindowOnly.md) viene impostato su True, per indicare che si tratta di un controllo con finestra.  Implementa una mappa del sink.  Per ulteriori informazioni, vedere [Supporto per controlli DHTML](../../atl/atl-support-for-dhtml-controls.md).  
  
-   **Controllo DHTML**: controllo ATL DHTML, che consente di specificare l'interfaccia utente mediante HTML.  La classe UI DHTML contiene una mappa COM.  Per impostazione predefinita, [CComControlBase::m\_bWindowOnly](../Topic/CComControlBase::m_bWindowOnly.md) viene impostato su True, per indicare che si tratta di un controllo con finestra.  
  
     Per ulteriori informazioni, vedere [Identifying the Elements of the DHTML Control Project](../../atl/identifying-the-elements-of-the-dhtml-control-project.md).  
  
 **Controllo minimo**  
 Garantisce il supporto delle sole interfacce indispensabili alla maggior parte dei contenitori.  È possibile impostare **Controllo minimo** per qualsiasi tipo di controllo. Il controllo minimo può essere standard, composto o DHTML.  
  
 **Aggregazione**  
 Consente di aggiungere il supporto dell'aggregazione per il controllo creato.  Per ulteriori informazioni, vedere [Aggregation](../../atl/aggregation.md).  
  
-   **Sì**: utilizzare questa opzione per creare un controllo che è possibile aggregare.  
  
-   **No**: utilizzare questa opzione per creare un controllo che non è possibile aggregare.  
  
-   **Solo**: utilizzare questa opzione per creare un controllo di cui è possibile creare istanze solo tramite l'aggregazione.  
  
 **Modello di threading**  
 Consente di specificare il modello di threading utilizzato dal controllo.  
  
-   **Single**: il controllo viene eseguito solo nel thread COM primario.  
  
-   **Apartment**: è possibile creare il controllo in qualsiasi Single Thread Apartment.  Valore predefinito.  
  
 **Interfaccia**  
 Il tipo di interfaccia esposta al contenitore da questo controllo.  
  
-   **Dual**: utilizzare questa opzione per creare un'interfaccia che espone proprietà e metodi tramite `IDispatch` e direttamente tramite VTBL.  
  
-   **Personalizzata**: utilizzare questa opzione per creare un'interfaccia che espone metodi direttamente tramite VTBL.  
  
     Se si seleziona **Personalizzata**, è possibile specificare che il controllo è **Compatibile con l'automazione**.  Se si sceglie **Compatibile con l'automazione**, l'attributo [oleautomation](../../windows/oleautomation.md) verrà aggiunto all'interfaccia nell'IDL e sarà possibile effettuare il marshalling dell'interfaccia mediante il gestore di marshalling universale in oleaut32.dll.  Per ulteriori informazioni, vedere [Marshaling Details](http://msdn.microsoft.com/library/windows/desktop/ms692621) in [!INCLUDE[winsdkshort](../../atl/reference/includes/winsdkshort_md.md)] \(informazioni in lingua inglese\).  
  
     Se si sceglie **Compatibile con l'automazione**, inoltre, tutti i parametri per tutti i metodi nel controllo devono essere compatibili con **VARIANT**.  
  
 **Supporto**  
 Consente di impostare supporti aggiuntivi per il controllo.  
  
-   **Punti di connessione**: utilizzare questa opzione per attivare i punti di connessione per l'oggetto facendo derivare la classe dell'oggetto da [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) e consentendo l'esposizione di un'interfaccia di origine.  
  
-   **Concesso in licenza**: utilizzare questa opzione per aggiungere supporto al controllo per la [licenza](http://msdn.microsoft.com/library/windows/desktop/ms690543).  È possibile utilizzare i controlli con licenza solo se il computer client dispone della licenza corretta.  
  
## Vedere anche  
 [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md)