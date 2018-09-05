---
title: Tratti delle finestre ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- window traits
ms.assetid: c90cf850-9e91-49da-9cf3-ad4efb30347d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 91ea30c79712ced6c86da0b030882fe6a88359ed
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43764043"
---
# <a name="understanding-window-traits"></a>Informazioni sui tratti delle finestre

Traits (classi) finestra offrono un metodo semplice per la standardizzazione con gli stili usati per la creazione di un oggetto di finestra ATL. Vengono inoltre accettati come parametri del modello da tratti delle finestre [CWindowImpl](../atl/reference/cwindowimpl-class.md) e altre classi di finestra ATL allo scopo di fornire stili di finestra a livello di classe predefiniti.

Se il creatore di un'istanza non fornisce gli stili in modo esplicito nella chiamata a [Create](../atl/reference/cwindowimpl-class.md#create), è possibile usare una classe traits per assicurarsi che la finestra è ancora creata con gli stili corretti. È anche possibile garantire che alcuni stili siano impostate per tutte le istanze di tale classe finestra mentre altri devono essere impostate in ogni istanza.

## <a name="atl-window-traits-templates"></a>Modelli tratti di finestra ATL

ATL offre due modelli di tratti finestra che sono possibile impostare gli stili predefiniti in fase di compilazione usando i relativi parametri di modello.

|Classe|Descrizione|
|-----------|-----------------|
|[CWinTraits](../atl/reference/cwintraits-class.md)|Usare questo modello quando si desidera fornire stili di finestra che verranno utilizzati solo se nessun altri stili vengono specificati nella chiamata a predefiniti `Create`. Gli stili specificati alla prioritari fase di esecuzione tramite gli stili impostati in fase di compilazione.|
|[CWinTraitsOR](../atl/reference/cwintraitsor-class.md)|Utilizzare questa classe quando si desidera specificare gli stili che devono essere sempre impostati per la classe della finestra. Gli stili forniti in fase di esecuzione vengono combinati con gli stili impostati in fase di compilazione usando l'operatore OR bit per bit.|

Oltre a questi modelli, ATL fornisce una serie di specializzazioni predefinite del `CWinTraits` modello per le combinazioni di stili di finestra comunemente utilizzate. Vedere le [CWinTraits](../atl/reference/cwintraits-class.md) fare riferimento alla documentazione per informazioni dettagliate.

## <a name="custom-window-traits"></a>Tratti delle finestre personalizzati

Nel caso poco probabile che uno dei modelli forniti da ATL specializzato non è sufficiente ed è necessario creare la propria classe traits, è sufficiente creare una classe che implementa due funzioni statiche: `GetWndStyle` e `GetWndStyleEx`:

[!code-cpp[NVC_ATL_Windowing#68](../atl/codesnippet/cpp/understanding-window-traits_1.h)]

Ognuna di queste funzioni verrà passato alcuni valori di stile di visualizzazione in fase di esecuzione che può usare per produrre un nuovo valore di stile. Se la classe traits finestra viene utilizzata come argomento del modello a una classe di finestra ATL, i valori di stile passati a queste funzioni statiche saranno passati come argomenti di stile per [Create](../atl/reference/cwindowimpl-class.md#create).

## <a name="see-also"></a>Vedere anche

[Classi di finestre](../atl/atl-window-classes.md)

