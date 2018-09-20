---
title: Specifica dei livelli di funzionalità | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CObject class [MFC], adding functionality to derived classes
- runtime [MFC], class information
- serialization [MFC], Cobject
- dynamic creation support
- levels [MFC], functionality in CObject
- run-time class [MFC], information support
- levels [MFC]
ms.assetid: 562669ba-c858-4f66-b5f1-b3beeea4f486
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c4b5ed392850fac97e8671774dee0905bf3417eb
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46375890"
---
# <a name="specifying-levels-of-functionality"></a>Specifica dei livelli di funzionalità

Questo articolo descrive come aggiungere i seguenti livelli di funzionalità per i [CObject](../mfc/reference/cobject-class.md)-classe derivata:

- [Informazioni sulle classi di runtime](#_core_to_add_run.2d.time_class_information)

- [Supporto della creazione dinamica](#_core_to_add_dynamic_creation_support)

- [Supporto della serializzazione](#_core_to_add_serialization_support)

Per una descrizione generale del `CObject` funzionalità, vedere l'articolo [derivando una classe da CObject](../mfc/deriving-a-class-from-cobject.md).

- [Informazioni sulle classi di runtime](#_core_to_add_run.2d.time_class_information)
#### <a name="_core_to_add_run.2d.time_class_information"></a> Per aggiungere informazioni sulla classe di runtime

1. Derivare la classe da `CObject`, come descritto nel [derivando una classe da CObject](../mfc/deriving-a-class-from-cobject.md) articolo.

1. Usare il DECLARE_DYNAMIC (macro) nella dichiarazione di classe, come illustrato di seguito:

     [!code-cpp[NVC_MFCCObjectSample#2](../mfc/codesnippet/cpp/specifying-levels-of-functionality_1.h)]

1. Usare l'IMPLEMENT_DYNAMIC (macro) nel file di implementazione (. CPP) della classe. Questa macro accetta come argomenti il nome della classe e relativa classe base, come indicato di seguito:

     [!code-cpp[NVC_MFCCObjectSample#3](../mfc/codesnippet/cpp/specifying-levels-of-functionality_2.cpp)]

> [!NOTE]
>  Inserire sempre IMPLEMENT_DYNAMIC nel file di implementazione (. CPP) per la classe. IMPLEMENT_DYNAMIC (macro) deve essere valutato una sola volta durante una compilazione e pertanto non devono essere utilizzate in un file di interfaccia (. H) che potrebbe potenzialmente essere inclusi in più di un file.

#### <a name="_core_to_add_dynamic_creation_support"></a> Per aggiungere supporto per la creazione dinamica

1. Derivare la classe da `CObject`.

1. Usare il DECLARE_DYNCREATE (macro) nella dichiarazione di classe.

1. Definire un costruttore senza argomenti (un costruttore predefinito).

1. Usare la macro IMPLEMENT_DYNCREATE nel file di implementazione della classe.

#### <a name="_core_to_add_serialization_support"></a> Per aggiungere il supporto della serializzazione

1. Derivare la classe da `CObject`.

1. Eseguire l'override di `Serialize` funzione membro.

    > [!NOTE]
    >  Se si chiama `Serialize` direttamente, vale a dire non desiderate serializzare l'oggetto tramite un puntatore polimorfico, omettere i passaggi da 3 a 5.

1. Usare il DECLARE_SERIAL (macro) nella dichiarazione di classe.

1. Definire un costruttore senza argomenti (un costruttore predefinito).

1. Usare l'IMPLEMENT_SERIAL (macro) nel file di implementazione della classe.

> [!NOTE]
>  Un "puntatore polimorfico" punta a un oggetto di una classe (chiamarlo oggetto) o a un oggetto di qualsiasi classe derivata da una (ad esempio, B). Per serializzare tramite un puntatore polimorfico, il framework deve determinare la classe di runtime dell'oggetto che si sta serializzando (B), poiché potrebbe essere un oggetto di qualsiasi classe derivata da una classe di base (A).

Per altre informazioni su come abilitare la serializzazione quando si deriva la classe da `CObject`, vedere gli articoli [file in MFC](../mfc/files-in-mfc.md) e [serializzazione](../mfc/serialization-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[Derivazione da una classe da CObject](../mfc/deriving-a-class-from-cobject.md)
