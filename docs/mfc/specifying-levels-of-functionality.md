---
title: "Specifica dei livelli di funzionalità | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- CObject class [MFC], adding functionality to derived classes
- runtime [MFC], class information
- serialization [MFC], Cobject
- dynamic creation support
- levels [MFC], functionality in CObject
- run-time class [MFC], information support
- levels [MFC]
ms.assetid: 562669ba-c858-4f66-b5f1-b3beeea4f486
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 13a2897d5e442794198870e7f6bed36196744888
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="specifying-levels-of-functionality"></a>Specifica dei livelli di funzionalità
In questo articolo viene descritto come aggiungere i seguenti livelli di funzionalità per il [CObject](../mfc/reference/cobject-class.md)-classe derivata:  
  
-   [Informazioni sulle classi in fase di esecuzione](#_core_to_add_run.2d.time_class_information)  
  
-   [Supporto per la creazione dinamica](#_core_to_add_dynamic_creation_support)  
  
-   [Supporto della serializzazione](#_core_to_add_serialization_support)  
  
 Per una descrizione generale di `CObject` funzionalità, vedere l'articolo [derivando una classe da CObject](../mfc/deriving-a-class-from-cobject.md).  
  
-   [Informazioni sulle classi in fase di esecuzione](#_core_to_add_run.2d.time_class_information)  
#### <a name="_core_to_add_run.2d.time_class_information"></a>Per aggiungere informazioni sulle classi in fase di esecuzione  
  
1.  Derivare la classe da `CObject`, come descritto nel [derivando una classe da CObject](../mfc/deriving-a-class-from-cobject.md) articolo.  
  
2.  Utilizzare il `DECLARE_DYNAMIC` macro nella dichiarazione di classe, come illustrato di seguito:  
  
     [!code-cpp[NVC_MFCCObjectSample#2](../mfc/codesnippet/cpp/specifying-levels-of-functionality_1.h)]  
  
3.  Utilizzare il `IMPLEMENT_DYNAMIC` macro nel file di implementazione (. CPP) della classe. Questa macro accetta come argomenti il nome di classe e la relativa classe base, come indicato di seguito:  
  
     [!code-cpp[NVC_MFCCObjectSample#3](../mfc/codesnippet/cpp/specifying-levels-of-functionality_2.cpp)]  
  
> [!NOTE]
>  Inserire sempre `IMPLEMENT_DYNAMIC` nel file di implementazione (. CPP) per la classe. Il `IMPLEMENT_DYNAMIC` macro deve essere valutato solo una volta durante una compilazione e pertanto non devono essere utilizzata in un file di interfaccia (. H) che possano essere potenzialmente inclusi in più di un file.  
  
#### <a name="_core_to_add_dynamic_creation_support"></a>Per aggiungere supporto per la creazione dinamica  
  
1.  Derivare la classe da `CObject`.  
  
2.  Utilizzare il `DECLARE_DYNCREATE` macro nella dichiarazione di classe.  
  
3.  Definire un costruttore senza argomenti (un costruttore predefinito).  
  
4.  Utilizzare il `IMPLEMENT_DYNCREATE` macro nel file di implementazione della classe.  
  
#### <a name="_core_to_add_serialization_support"></a>Per aggiungere il supporto della serializzazione  
  
1.  Derivare la classe da `CObject`.  
  
2.  Eseguire l'override di `Serialize` funzione membro.  
  
    > [!NOTE]
    >  Se si chiama `Serialize` direttamente, vale a dire non si desidera serializzare l'oggetto mediante un puntatore polimorfico, omettere i passaggi da 3 a 5.  
  
3.  Utilizzare il `DECLARE_SERIAL` macro nella dichiarazione di classe.  
  
4.  Definire un costruttore senza argomenti (un costruttore predefinito).  
  
5.  Utilizzare il `IMPLEMENT_SERIAL` macro nel file di implementazione della classe.  
  
> [!NOTE]
>  Un "puntatore polimorfico" punta a un oggetto di una classe (chiamata A) o a un oggetto di qualsiasi classe derivata (ad esempio B). Per serializzare mediante un puntatore polimorfico, il framework deve determinare la classe di runtime dell'oggetto che si sta serializzando (B), poiché potrebbe essere un oggetto di qualsiasi classe derivata da una classe di base (A).  
  
 Per ulteriori informazioni su come abilitare la serializzazione, quando si deriva dalla classe `CObject`, vedere gli articoli [file in MFC](../mfc/files-in-mfc.md) e [serializzazione](../mfc/serialization-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Derivazione da una classe da CObject](../mfc/deriving-a-class-from-cobject.md)
