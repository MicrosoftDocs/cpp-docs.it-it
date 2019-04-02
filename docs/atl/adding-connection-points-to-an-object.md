---
title: Aggiunta di punti di connessione a un oggetto
ms.date: 11/04/2016
helpviewer_keywords:
- connection points [C++], adding to ATL objects
- Implement Connection Point ATL wizard
ms.assetid: 843531be-4a36-4db0-9d54-e029b1a72a8b
ms.openlocfilehash: 7341e69852ed804122e0196b51d305f5af0c35b9
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58772944"
---
# <a name="adding-connection-points-to-an-object"></a>Aggiunta di punti di connessione a un oggetto

Il [esercitazione di ATL](../atl/active-template-library-atl-tutorial.md) viene illustrato come creare un controllo con supporto per i punti di connessione, come aggiungere gli eventi e quindi come implementare il punto di connessione. ATL implementa i punti di connessione con il [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) classe.

Per implementare un punto di connessione, sono disponibili due opzioni:

- Implementare il proprio origine evento in uscita, mediante l'aggiunta di un punto di connessione per il controllo o l'oggetto.

- Riusare un'interfaccia di punto di connessione definita in un'altra libreria dei tipi.

In entrambi i casi, l'implementazione guidata punto di connessione Usa una libreria dei tipi per l'esecuzione delle operazioni.

### <a name="to-add-a-connection-point-to-a-control-or-object"></a>Per aggiungere un punto di connessione a un controllo o oggetto

1. Definire un'interfaccia dispatch nel blocco di libreria del file IDL. Se è abilitato il supporto per i punti di connessione durante la creazione del controllo con la creazione guidata controllo ATL, l'interfaccia dispatch sarà già stato creato. Se non è stato abilitato il supporto per i punti di connessione durante la creazione del controllo, è necessario aggiungere manualmente un'interfaccia dispatch del file con estensione idl. Di seguito è riportato un esempio di un'interfaccia dispatch. Le interfacce in uscita non sono necessarie per essere interfacce dispatch ma richiedono molti linguaggi di scripting come VBScript e JScript, in modo che questo esempio usa due interfacce dispatch:

   [!code-cpp[NVC_ATL_Windowing#81](../atl/codesnippet/cpp/adding-connection-points-to-an-object_1.idl)]

   Usare utilità uuidgen.exe o guidgen.exe per generare un GUID.

2. Aggiungere l'interfaccia dispatch come il `[default,source]` interfaccia nella coclasse per l'oggetto nel file con estensione idl del progetto. Anche in questo caso, se è abilitato il supporto per i punti di connessione durante la creazione del controllo, la creazione guidata controllo ATL creerà il `[default,source`] voce. Per aggiungere manualmente questa voce, aggiungere la riga in grassetto:

   [!code-cpp[NVC_ATL_Windowing#82](../atl/codesnippet/cpp/adding-connection-points-to-an-object_2.idl)]

   Vedere il file con estensione idl nel [Circ](../overview/visual-cpp-samples.md) esempio ATL per un esempio.

3. Utilizzare Visualizzazione classi per aggiungere metodi e proprietà per l'interfaccia eventi. Fare doppio clic la classe in visualizzazione classi, scegliere **Add** nel menu di scelta rapida e fare clic su **Aggiungi punto di connessione**.

4. Nel **interfacce di origine** casella di riepilogo della guidata implementare punto di connessione, selezionare **interfacce del progetto**. Se si sceglie un'interfaccia per il controllo e premere **OK**, si apprenderà come:

   - Generare un file di intestazione con la classe proxy per un evento che implementa il codice che userà le chiamate in uscita per l'evento.

   - Aggiungere una voce alla mappa del punto di connessione.

   È inoltre verrà visualizzato un elenco di tutte le librerie dei tipi nel computer. Si deve usare solo una di queste altre librerie dei tipi per definire il punto di connessione se si desidera implementare la stessa interfaccia in uscita esatta trovata in un'altra libreria dei tipi.

### <a name="to-reuse-a-connection-point-interface-defined-in-another-type-library"></a>Per riusare un'interfaccia del punto di connessione definita in un'altra libreria dei tipi

1. In visualizzazione classi, fare doppio clic su una classe che implementa una **BEGIN_COM_MAP** macro, scegliere **Add** nel menu di scelta rapida e fare clic su **Aggiungi punto di connessione**.

2. Nella procedura guidata punto di connessione, implementare selezionare un'interfaccia e una libreria dei tipi nella libreria dei tipi e fare clic su **Add**.

3. Modificare il file con estensione idl a uno:

   - Copiare l'interfaccia dispatch dal file con estensione idl dell'oggetto la cui origine evento è in uso.

   - Usare la **importlib** istruzioni sulla libreria dei tipi.

## <a name="see-also"></a>Vedere anche

[Punto di connessione](../atl/atl-connection-points.md)
