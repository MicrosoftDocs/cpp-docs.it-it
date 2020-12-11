---
description: 'Altre informazioni su: informazioni sui tratti della finestra'
title: Tratti della finestra ATL
ms.date: 11/04/2016
helpviewer_keywords:
- window traits
ms.assetid: c90cf850-9e91-49da-9cf3-ad4efb30347d
ms.openlocfilehash: a42ef66afe09e0e528f05419799dce48c43b1bbf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157295"
---
# <a name="understanding-window-traits"></a>Informazioni sui tratti della finestra

Le classi di tratti della finestra forniscono un metodo semplice per la standardizzazione degli stili utilizzati per la creazione di un oggetto finestra ATL. I tratti della finestra sono accettati come parametri di modello da [CWindowImpl](../atl/reference/cwindowimpl-class.md) e altre classi di finestra ATL come metodo per fornire stili di finestra predefiniti a livello di classe.

Se il creatore di un'istanza della finestra non fornisce stili in modo esplicito nella chiamata a [create](../atl/reference/cwindowimpl-class.md#create), è possibile usare una classe di tratti per assicurarsi che la finestra venga ancora creata con gli stili corretti. È anche possibile garantire che determinati stili siano impostati per tutte le istanze della classe della finestra, consentendo allo stesso tempo l'impostazione di altri stili in base all'istanza.

## <a name="atl-window-traits-templates"></a>Modelli di tratti della finestra ATL

ATL fornisce due modelli di tratti finestra che consentono di impostare gli stili predefiniti in fase di compilazione utilizzando i relativi parametri di modello.

|Classe|Descrizione|
|-----------|-----------------|
|[CWinTraits](../atl/reference/cwintraits-class.md)|Utilizzare questo modello quando si desidera fornire stili di finestra predefiniti che verranno utilizzati solo quando non vengono specificati altri stili nella chiamata a `Create` . Gli stili forniti in fase di esecuzione hanno la precedenza sugli stili impostati in fase di compilazione.|
|[CWinTraitsOR](../atl/reference/cwintraitsor-class.md)|Utilizzare questa classe quando si desidera specificare gli stili che devono essere sempre impostati per la classe finestra. Gli stili forniti in fase di esecuzione vengono combinati con gli stili impostati in fase di compilazione utilizzando l'operatore OR bit per bit.|

Oltre a questi modelli, ATL fornisce una serie di specializzazioni predefinite del `CWinTraits` modello per le combinazioni comunemente usate di stili di finestra. Per informazioni dettagliate, vedere la documentazione di riferimento di [CWinTraits](../atl/reference/cwintraits-class.md) .

## <a name="custom-window-traits"></a>Tratti di finestra personalizzati

Nella situazione improbabile che la specializzazione di uno dei modelli forniti da ATL non è sufficiente ed è necessario creare una classe di tratti personalizzata, è sufficiente creare una classe che implementi due funzioni statiche: `GetWndStyle` e `GetWndStyleEx` :

[!code-cpp[NVC_ATL_Windowing#68](../atl/codesnippet/cpp/understanding-window-traits_1.h)]

A ognuna di queste funzioni verrà passato un valore di stile in fase di esecuzione, che può utilizzare per produrre un nuovo valore di stile. Se la classe dei tratti della finestra viene usata come argomento di modello per una classe della finestra ATL, i valori di stile passati a queste funzioni statiche saranno tutti gli elementi passati come argomenti di stile da [creare](../atl/reference/cwindowimpl-class.md#create).

## <a name="see-also"></a>Vedi anche

[Classi finestra](../atl/atl-window-classes.md)
