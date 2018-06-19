---
title: Opzioni, creazione guidata controllo ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.control.options
dev_langs:
- C++
helpviewer_keywords:
- ATL Control Wizard, options
ms.assetid: 4607c51a-992d-433e-9281-919c6f519a3d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ab1062d32aadc2ec4af68cda8bca02ac1a45a526
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32364473"
---
# <a name="options-atl-control-wizard"></a>Opzioni, Creazione guidata controllo ATL
Inserire qui "Riepilogo risultati di ricerca".  
  
 Utilizzare questa pagina della procedura guidata per definire il tipo di controllo che si sta creando e il livello di supporto di interfaccia che contiene.  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Tipo di controllo**  
 Il tipo di controllo che si desidera creare.  
  
-   **Controllo standard: un controllo ActiveX.**  
  
-   **Controllo composito**: un controllo ActiveX che può contenere (simile a una finestra di dialogo) altri controlli ActiveX o Windows. Un controllo composito include quanto segue:  
  
    -   Un modello per la finestra di dialogo che implementa il controllo composito.  
  
    -   Una risorsa personalizzata, del Registro di sistema, che registra automaticamente il controllo composito quando richiamato.  
  
    -   Una classe C++ che implementa il controllo composito.  
  
    -   Un'interfaccia COM esposta dal controllo composito.  
  
    -   Una pagina HTML test che contiene il controllo composito.  
  
     Per impostazione predefinita, questo controllo imposta [CComControlBase](../../atl/reference/ccomcontrolbase-class.md#m_bwindowonly) su true, per indicare che si tratta di un controllo con finestra. Implementa una mappa del sink. Per ulteriori informazioni, vedere [supporto per controlli DHTML](../../atl/atl-support-for-dhtml-controls.md).  
  
-   **Controllo DHTML**: controllo DHTML ATL un specifica l'interfaccia utente, in formato HTML. La classe UI DHTML contiene una mappa COM. Per impostazione predefinita, questo controllo imposta [CComControlBase](../../atl/reference/ccomcontrolbase-class.md#m_bwindowonly) su true, per indicare che si tratta di un controllo con finestra.  
  
     Per ulteriori informazioni, vedere [identificazione degli elementi del progetto controllo DHTML](../../atl/identifying-the-elements-of-the-dhtml-control-project.md).  
  
 **Controllo minimo**  
 Supporta solo le interfacce che sono assolutamente necessarie per la maggior parte dei contenitori. È possibile impostare **controllo minimo** per tutti i tipi di controllo: è possibile creare un controllo standard minimo, un controllo composito minimo o un controllo DHTML minimo.  
  
 **Aggregazione**  
 Aggiunge il supporto di aggregazione per il controllo che si sta creando. Per ulteriori informazioni, vedere [aggregazione](../../atl/aggregation.md).  
  
-   **Sì**: creare un controllo che può essere aggregato.  
  
-   **Non**: creare un controllo che non può essere aggregato.  
  
-   **Solo**: creare un controllo che è possibile creare istanze solo tramite l'aggregazione.  
  
 **Modello di threading**  
 Specifica che il modello di threading utilizzato dal controllo.  
  
-   **Singolo**: il controllo viene eseguito solo nel thread COM primario.  
  
-   **Apartment**: il controllo può essere creato in un apartment a thread singolo. Valore predefinito.  
  
 **Interface**  
 Il tipo di interfaccia di che questo controllo espone al contenitore.  
  
-   **Dual**: crea un'interfaccia che espone proprietà e metodi tramite `IDispatch` e direttamente tramite VTBL.  
  
-   **Custom**: creare un'interfaccia che espone i metodi direttamente tramite VTBL.  
  
     Se si seleziona **personalizzato**, è possibile specificare che il controllo è **compatibile con l'automazione**. Se si seleziona **compatibile con l'automazione**, quindi la procedura guidata aggiunge il [oleautomation](../../windows/oleautomation.md) attributo per l'interfaccia nell'IDL e l'interfaccia può essere sottoposto a marshalling dal gestore di marshalling universale in oleaut32.dll. Vedere [marshalling dettagli](http://msdn.microsoft.com/library/windows/desktop/ms692621) in Windows SDK per ulteriori informazioni.  
  
     Inoltre, se si seleziona **compatibile con l'automazione**, tutti i parametri per tutti i metodi del controllo devono essere **VARIANT** compatibile.  
  
 **Supporto**  
 Imposta supporti aggiuntivi per il controllo.  
  
-   **Punti di connessione**: Abilita punti di connessione per l'oggetto mediante derivazione dalla classe dell'oggetto [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) e consentendo di esporre un'interfaccia di origine.  
  
-   **Concesso in licenza**: aggiunge il supporto per il controllo per [licenze](http://msdn.microsoft.com/library/windows/desktop/ms690543). Controlli con licenza possono essere ospitati solo se il computer client dispone della licenza corretta.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md)

