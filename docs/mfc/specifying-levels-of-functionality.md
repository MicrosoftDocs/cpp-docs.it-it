---
title: Specifica dei livelli di funzionalità | Documenti Microsoft
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
ms.openlocfilehash: 425cbf2f9c769dbbb6cd054b9af6b7f6f5fc9d52
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36954465"
---
# <a name="specifying-levels-of-functionality"></a>Specifica dei livelli di funzionalità
In questo articolo viene descritto come aggiungere i seguenti livelli di funzionalità per il [CObject](../mfc/reference/cobject-class.md)-classe derivata:  
  
-   [Informazioni sulle classi di runtime](#_core_to_add_run.2d.time_class_information)  
  
-   [Supporto per la creazione dinamica](#_core_to_add_dynamic_creation_support)  
  
-   [Supporto della serializzazione](#_core_to_add_serialization_support)  
  
 Per una descrizione generale del `CObject` funzionalità, vedere l'articolo [derivando una classe da CObject](../mfc/deriving-a-class-from-cobject.md).  
  
-   [Informazioni sulle classi di runtime](#_core_to_add_run.2d.time_class_information)  
#### <a name="_core_to_add_run.2d.time_class_information"></a> Per aggiungere informazioni sulle classi di runtime  
  
1.  Derivare la classe da `CObject`, come descritto nel [derivando una classe da CObject](../mfc/deriving-a-class-from-cobject.md) articolo.  
  
2.  Usare la macro DECLARE_DYNAMIC nella dichiarazione di classe, come illustrato di seguito:  
  
     [!code-cpp[NVC_MFCCObjectSample#2](../mfc/codesnippet/cpp/specifying-levels-of-functionality_1.h)]  
  
3.  Usare la macro IMPLEMENT_DYNAMIC nel file di implementazione (. CPP) della classe. Questa macro accetta come argomenti il nome della classe e relativa classe base, come indicato di seguito:  
  
     [!code-cpp[NVC_MFCCObjectSample#3](../mfc/codesnippet/cpp/specifying-levels-of-functionality_2.cpp)]  
  
> [!NOTE]
>  Inserire sempre IMPLEMENT_DYNAMIC nel file di implementazione (. CPP) per la classe. IMPLEMENT_DYNAMIC (macro) deve essere valutata una sola volta durante una compilazione e pertanto non devono essere utilizzate in un file di interfaccia (. H) che possano essere potenzialmente inclusi in più di un file.  
  
#### <a name="_core_to_add_dynamic_creation_support"></a> Per aggiungere supporto per la creazione dinamica  
  
1.  Derivare la classe da `CObject`.  
  
2.  Usare la macro DECLARE_DYNCREATE nella dichiarazione di classe.  
  
3.  Definire un costruttore senza argomenti (un costruttore predefinito).  
  
4.  Usare la macro IMPLEMENT_DYNCREATE nel file di implementazione della classe.  
  
#### <a name="_core_to_add_serialization_support"></a> Per aggiungere il supporto della serializzazione  
  
1.  Derivare la classe da `CObject`.  
  
2.  Eseguire l'override di `Serialize` funzione membro.  
  
    > [!NOTE]
    >  Se si chiama `Serialize` direttamente, vale a dire, non si desidera serializzare l'oggetto mediante un puntatore polimorfico, omettere i passaggi da 3 a 5.  
  
3.  Usare la macro DECLARE_SERIAL nella dichiarazione di classe.  
  
4.  Definire un costruttore senza argomenti (un costruttore predefinito).  
  
5.  Usare la macro IMPLEMENT_SERIAL nel file di implementazione della classe.  
  
> [!NOTE]
>  Un "puntatore polimorfico" punta a un oggetto di una classe (chiamarlo A) o a un oggetto di qualsiasi classe derivata da (ad esempio B). Per serializzare mediante un puntatore polimorfico, il framework deve determinare la classe di runtime dell'oggetto che si sta serializzando (B), poiché potrebbe essere un oggetto di qualsiasi classe derivata da una classe di base (A).  
  
 Per ulteriori informazioni su come abilitare la serializzazione, quando si deriva una classe da `CObject`, vedere gli articoli [file in MFC](../mfc/files-in-mfc.md) e [serializzazione](../mfc/serialization-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Derivazione da una classe da CObject](../mfc/deriving-a-class-from-cobject.md)
