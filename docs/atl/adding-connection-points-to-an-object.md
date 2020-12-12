---
description: 'Altre informazioni su: aggiunta di punti di connessione a un oggetto'
title: Aggiunta di punti di connessione a un oggetto
ms.date: 11/04/2016
helpviewer_keywords:
- connection points [C++], adding to ATL objects
- Implement Connection Point ATL wizard
ms.assetid: 843531be-4a36-4db0-9d54-e029b1a72a8b
ms.openlocfilehash: 7d8274ab37cef28a58666852aad24db7d945d26e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166239"
---
# <a name="adding-connection-points-to-an-object"></a>Aggiunta di punti di connessione a un oggetto

Nell' [esercitazione di ATL](../atl/active-template-library-atl-tutorial.md) viene illustrato come creare un controllo con supporto per i punti di connessione, come aggiungere eventi e come implementare il punto di connessione. ATL implementa i punti di connessione con la classe [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) .

Per implementare un punto di connessione, sono disponibili due opzioni:

- Implementare un'origine evento in uscita, aggiungendo un punto di connessione al controllo o all'oggetto.

- Riutilizza un'interfaccia del punto di connessione definita in un'altra libreria di tipi.

In entrambi i casi, la procedura guidata implementa punto di connessione utilizza una libreria dei tipi per eseguire le operazioni.

### <a name="to-add-a-connection-point-to-a-control-or-object"></a>Per aggiungere un punto di connessione a un controllo o a un oggetto

1. Definire un'interfaccia dispatch nel blocco della libreria del file IDL. Se è stato abilitato il supporto per i punti di connessione quando è stato creato il controllo con la creazione guidata controllo ATL, l'interfaccia dispatch verrà già creata. Se non è stato abilitato il supporto per i punti di connessione quando è stato creato il controllo, è necessario aggiungere manualmente un'interfaccia dispatch al file IDL. Di seguito è riportato un esempio di un'interfaccia dispatch. Le interfacce in uscita non devono essere interfacce dispatch, ma molti linguaggi di scripting come VBScript e JScript lo richiedono, quindi in questo esempio vengono usati due dispinterfaces:

   [!code-cpp[NVC_ATL_Windowing#81](../atl/codesnippet/cpp/adding-connection-points-to-an-object_1.idl)]

   Utilizzare l'utilità uuidgen.exe o guidgen.exe per generare un GUID.

2. Aggiungere l'interfaccia dispatch come `[default,source]` interfaccia nella coclasse per l'oggetto nel file con estensione IDL del progetto. Anche in questo caso, se è stato abilitato il supporto per i punti di connessione al momento della creazione del controllo, la creazione guidata controllo ATL creerà la `[default,source` voce]. Per aggiungere manualmente questa voce, aggiungere la riga in grassetto:

   [!code-cpp[NVC_ATL_Windowing#82](../atl/codesnippet/cpp/adding-connection-points-to-an-object_2.idl)]

   Per un esempio, vedere il file IDL nell'esempio [circ](../overview/visual-cpp-samples.md) ATL.

3. Usare Visualizzazione classi per aggiungere metodi e proprietà all'interfaccia eventi. Fare clic con il pulsante destro del mouse sulla classe in Visualizzazione classi, scegliere **Aggiungi** dal menu di scelta rapida e fare clic su **Aggiungi punto di connessione**.

4. Nella casella di riepilogo **interfacce di origine** della procedura guidata implementa punto di connessione selezionare **interfacce del progetto**. Se si sceglie un'interfaccia per il controllo e si preme **OK**, sarà necessario:

   - Generare un file di intestazione con una classe proxy di evento che implementi il codice che effettuerà le chiamate in uscita per l'evento.

   - Aggiungere una voce alla mappa del punto di connessione.

   Viene inoltre visualizzato un elenco di tutte le librerie dei tipi nel computer. È consigliabile utilizzare solo una di queste librerie dei tipi per definire il punto di connessione se si desidera implementare esattamente la stessa interfaccia in uscita presente in un'altra libreria dei tipi.

### <a name="to-reuse-a-connection-point-interface-defined-in-another-type-library"></a>Per riutilizzare un'interfaccia del punto di connessione definita in un'altra libreria di tipi

1. In Visualizzazione classi fare clic con il pulsante destro del mouse su una classe che implementa una macro **BEGIN_COM_MAP** , scegliere **Aggiungi** dal menu di scelta rapida e fare clic su **Aggiungi punto di connessione**.

2. In implementazione guidata punto di connessione selezionare una libreria dei tipi e un'interfaccia nella libreria dei tipi, quindi fare clic su **Aggiungi**.

3. Modificare il file con estensione IDL in uno dei seguenti:

   - Copiare l'interfaccia dispatch dal file IDL per l'oggetto di cui viene utilizzata l'origine evento.

   - Utilizzare l'istruzione **importlib** in tale libreria dei tipi.

## <a name="see-also"></a>Vedi anche

[Punto di connessione](../atl/atl-connection-points.md)
