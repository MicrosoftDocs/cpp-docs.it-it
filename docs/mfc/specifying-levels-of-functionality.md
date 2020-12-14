---
description: 'Altre informazioni su: specifica dei livelli di funzionalità'
title: Specifica dei livelli di funzionalità
ms.date: 11/06/2018
helpviewer_keywords:
- CObject class [MFC], adding functionality to derived classes
- runtime [MFC], class information
- serialization [MFC], Cobject
- dynamic creation support
- levels [MFC], functionality in CObject
- run-time class [MFC], information support
- levels [MFC]
ms.assetid: 562669ba-c858-4f66-b5f1-b3beeea4f486
ms.openlocfilehash: 1b016cd5a41d3e09790f678a2d49d88df33d9782
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216847"
---
# <a name="specifying-levels-of-functionality"></a>Specifica dei livelli di funzionalità

Questo articolo descrive come aggiungere i seguenti livelli di funzionalità alla classe derivata da [CObject](../mfc/reference/cobject-class.md):

- Informazioni sulle classi in fase di esecuzione

- Supporto per la creazione dinamica

- Supporto della serializzazione

Per una descrizione generale delle `CObject` funzionalità, vedere l'articolo [derivante una classe da CObject](../mfc/deriving-a-class-from-cobject.md).

## <a name="to-add-run-time-class-information"></a>Per aggiungere informazioni sulle classi in fase di esecuzione

1. Derivare la classe da `CObject` , come descritto nell'articolo [derivazione di una classe da CObject](../mfc/deriving-a-class-from-cobject.md) .

1. Usare la macro DECLARE_DYNAMIC nella dichiarazione della classe, come illustrato di seguito:

   [!code-cpp[NVC_MFCCObjectSample#2](../mfc/codesnippet/cpp/specifying-levels-of-functionality_1.h)]

1. Utilizzare la macro IMPLEMENT_DYNAMIC nel file di implementazione (. CPP) della classe. Questa macro accetta come argomenti il nome della classe e la relativa classe di base, come indicato di seguito:

   [!code-cpp[NVC_MFCCObjectSample#3](../mfc/codesnippet/cpp/specifying-levels-of-functionality_2.cpp)]

> [!NOTE]
> Inserire sempre IMPLEMENT_DYNAMIC nel file di implementazione (. CPP) per la classe. La macro IMPLEMENT_DYNAMIC deve essere valutata solo una volta durante una compilazione e pertanto non deve essere usata in un file di interfaccia (. H) che potrebbe essere potenzialmente inclusa in più di un file.

## <a name="to-add-dynamic-creation-support"></a>Per aggiungere il supporto per la creazione dinamica

1. Derivare la classe da `CObject` .

1. Usare la macro DECLARE_DYNCREATE nella dichiarazione della classe.

1. Definire un costruttore senza argomenti (un costruttore predefinito).

1. Usare la macro IMPLEMENT_DYNCREATE nel file di implementazione della classe.

## <a name="to-add-serialization-support"></a>Per aggiungere il supporto per la serializzazione

1. Derivare la classe da `CObject` .

1. Eseguire l'override della `Serialize` funzione membro.

   > [!NOTE]
   > Se si chiama `Serialize` direttamente, ovvero non si vuole serializzare l'oggetto tramite un puntatore polimorfico, omettere i passaggi da 3 a 5.

1. Usare la macro DECLARE_SERIAL nella dichiarazione della classe.

1. Definire un costruttore senza argomenti (un costruttore predefinito).

1. Usare la macro IMPLEMENT_SERIAL nel file di implementazione della classe.

> [!NOTE]
> Un "puntatore polimorfico" punta a un oggetto di una classe (la chiama) o a un oggetto di qualsiasi classe derivata da un (ad indicare, B). Per serializzare tramite un puntatore polimorfico, il Framework deve determinare la classe in fase di esecuzione dell'oggetto che sta serializzando (B), perché potrebbe essere un oggetto di qualsiasi classe derivata da una classe base (A).

Per ulteriori informazioni su come abilitare la serializzazione quando si deriva la classe da `CObject` , vedere gli articoli [file in MFC](../mfc/files-in-mfc.md) e [serializzazione](../mfc/serialization-in-mfc.md).

## <a name="see-also"></a>Vedi anche

[Derivazione di una classe da CObject](../mfc/deriving-a-class-from-cobject.md)
