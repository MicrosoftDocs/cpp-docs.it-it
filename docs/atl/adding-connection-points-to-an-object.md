---
title: Aggiunta di punti di connessione a un oggetto | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- connection points [C++], adding to ATL objects
- Implement Connection Point ATL wizard
ms.assetid: 843531be-4a36-4db0-9d54-e029b1a72a8b
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f63ec5bd9029302192e640e42a3d012df347219d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-connection-points-to-an-object"></a>Aggiunta di punti di connessione a un oggetto
Il [esercitazione di ATL](../atl/active-template-library-atl-tutorial.md) viene illustrato come creare un controllo con supporto per i punti di connessione, come aggiungere gli eventi e come implementare il punto di connessione. ATL implementa i punti di connessione con il [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) classe.  
  
 Per implementare un punto di connessione, sono disponibili due opzioni:  
  
-   Implementare la propria origine evento in uscita, mediante l'aggiunta di un punto di connessione per il controllo o l'oggetto.  
  
-   Riutilizzare un'interfaccia definita in un'altra libreria dei tipi del punto di connessione.  
  
 In entrambi i casi, l'implementazione guidata punto di connessione utilizza una libreria dei tipi di eseguire il lavoro.  
  
### <a name="to-add-a-connection-point-to-a-control-or-object"></a>Per aggiungere un punto di connessione a un controllo o un oggetto  
  
1.  Definire un'interfaccia dispatch nel blocco di libreria del file IDL. Se è abilitato il supporto per i punti di connessione quando il controllo è stato creato con la creazione guidata controllo ATL, verrà creato già l'interfaccia dispatch. Se non è stato abilitato il supporto per i punti di connessione al momento della creazione del controllo, è necessario aggiungere manualmente un'interfaccia dispatch per il file IDL. Di seguito è riportato un esempio di un'interfaccia dispatch. Interfacce in uscita non devono essere interfacce dispatch, ma richiedono molti linguaggi di scripting come VBScript e JScript, pertanto in questo esempio usa due dispinterfaces:  
  
     [!code-cpp[NVC_ATL_Windowing#81](../atl/codesnippet/cpp/adding-connection-points-to-an-object_1.idl)]  
  
     Utilizzare uuidgen.exe o guidgen.exe utilità per generare un GUID.  
  
2.  Aggiungere l'interfaccia dispatch come il `[default,source]` interfaccia nella coclasse per l'oggetto nel file IDL del progetto. Anche se è abilitato il supporto per i punti di connessione al momento della creazione del controllo, creazione guidata controllo ATL verrà creato il `[default,source`] voce. Per aggiungere manualmente questa voce, aggiungere la riga in grassetto:  
  
     [!code-cpp[NVC_ATL_Windowing#82](../atl/codesnippet/cpp/adding-connection-points-to-an-object_2.idl)]  
  
     Vedere il file IDL nel [Circ](../visual-cpp-samples.md) esempio ATL per un esempio.  
  
3.  Utilizzare Visualizzazione classi per aggiungere proprietà e metodi all'interfaccia eventi. Fare doppio clic su classe in visualizzazione classi, scegliere **Aggiungi** nel menu di scelta rapida e fare clic su **Aggiungi punto di connessione**.  
  
4.  Nel **interfacce di origine** casella di riepilogo dell'implementazione guidata punto di connessione selezionare **interfacce del progetto**. Se si sceglie un'interfaccia per il controllo e premere **OK**, sarà possibile:  
  
    -   Generare un file di intestazione con la classe proxy per un evento che implementa il codice in modo che le chiamate in uscita per l'evento.  
  
    -   Aggiungere una voce alla mappa del punto di connessione.  
  
     Si verifica anche un elenco di tutte le librerie dei tipi nel computer in uso. Deve utilizzare solo una di queste altre librerie dei tipi per definire il punto di connessione, se si desidera implementare la stessa interfaccia in uscita esatta trovata in un'altra libreria dei tipi.  
  
### <a name="to-reuse-a-connection-point-interface-defined-in-another-type-library"></a>Per riutilizzare l'interfaccia di un punto di connessione definita in un'altra libreria dei tipi  
  
1.  In visualizzazione classi, fare doppio clic su una classe che implementa un **BEGIN_COM_MAP** (macro), punto **Aggiungi** nel menu di scelta rapida e fare clic su **Aggiungi punto di connessione**.  
  
2.  Nella procedura guidata punto di connessione, implementare una libreria dei tipi e un'interfaccia della libreria dei tipi scegliere **Aggiungi**.  
  
3.  Modificare il file IDL per uno:  
  
    -   Copiare l'interfaccia dispatch dal file IDL per l'oggetto la cui origine evento è in uso.  
  
    -   Utilizzare il **importlib** istruzione sulla libreria dei tipi.  
  
## <a name="see-also"></a>Vedere anche  
 [Punto di connessione](../atl/atl-connection-points.md)

