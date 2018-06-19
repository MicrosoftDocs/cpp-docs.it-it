---
title: Derivazione di una classe da CObject | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CObject
dev_langs:
- C++
helpviewer_keywords:
- DECLARE_DYNCREATE macro [MFC]
- DECLARE_SERIAL macro [MFC]
- macros [MFC], serialization
- serialization [MFC], macros
- DECLARE_DYNAMIC macro [MFC]
- derived classes [MFC], from CObject
- CObject class [MFC], deriving serializable classes
- CObject class [MFC], deriving from
ms.assetid: 5ea4ea41-08b5-4bd8-b247-c5de8c152a27
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2d0b629617c1592387f3f959996fd3e9837242ea
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33349357"
---
# <a name="deriving-a-class-from-cobject"></a>Derivazione da una classe da CObject
Questo articolo descrive i passaggi minimi necessari per derivare una classe da [CObject](../mfc/reference/cobject-class.md). Altri `CObject` articoli di classe vengono descritti i passaggi necessari per sfruttare i vantaggi di specifico `CObject` funzionalità, ad esempio la serializzazione e di diagnostica supporto per il debug.  
  
 Negli argomenti relativi a `CObject`, i termini "file di interfaccia" e "file di implementazione" utilizzati di frequente. Il file di interfaccia (spesso chiamato file di intestazione, o. File H) contiene la dichiarazione di classe e le informazioni necessarie per l'utilizzo della classe. Il file di implementazione (o. I file CPP) contiene la definizione della classe, nonché il codice che implementa le funzioni membro della classe. Ad esempio, per una classe denominata `CPerson`, in genere è necessario creare un file di interfaccia denominato PERSON. H e un file di implementazione denominata PERSON. CPP. Tuttavia, per alcune classi di piccole dimensioni che non verrà condiviso tra le applicazioni, è talvolta più semplice combinare l'interfaccia e l'implementazione in una singola. File CPP.  
  
 È possibile scegliere tra quattro livelli di funzionalità quando si deriva una classe da `CObject`:  
  
-   Funzionalità di base: nessun supporto per informazioni sulla classe in fase di esecuzione o la serializzazione ma include la gestione della memoria di diagnostica.  
  
-   Funzionalità di base oltre al supporto per informazioni sulla classe in fase di esecuzione.  
  
-   Funzionalità di base oltre al supporto per informazioni sulla classe in fase di esecuzione e la creazione dinamica.  
  
-   Funzionalità di base oltre al supporto per la serializzazione, la creazione dinamica e informazioni sulle classi in fase di esecuzione.  
  
 Classi progettate per il riutilizzo, quelle che verranno utilizzate in un secondo momento come classi base, devono includere almeno il supporto di classe in fase di esecuzione e il supporto della serializzazione, se tutte le esigenze future di serializzazione sono previsto.  
  
 Scegliere il livello di funzionalità usando le macro specifiche di dichiarazione e l'implementazione nella dichiarazione e nell'implementazione di classi derivate da `CObject`.  
  
 Nella tabella seguente viene illustrata la relazione tra le macro utilizzate per supportare la serializzazione e informazioni di run-time.  
  
### <a name="macros-used-for-serialization-and-run-time-information"></a>Macro utilizzate per la serializzazione e informazioni di Run-Time  
  
|Macro utilizzata|CObject:: IsKindOf|CRuntimeClass::<br /><br /> CreateObject|CArchive::operator >><br /><br /> CArchive::operator <<|  
|----------------|-----------------------|--------------------------------------|-------------------------------------------------------|  
|Base `CObject` funzionalità|No|No|No|  
|`DECLARE_DYNAMIC`|Sì|No|No|  
|`DECLARE_DYNCREATE`|Sì|Sì|No|  
|`DECLARE_SERIAL`|Sì|Sì|Yes|  
  
#### <a name="to-use-basic-cobject-functionality"></a>Utilizzare la funzionalità di base da CObject  
  
1.  Utilizzare la sintassi C++ normale per derivare la classe da `CObject` (o da una classe derivata da `CObject`).  
  
     Nell'esempio seguente viene illustrato il caso più semplice, la derivazione di una classe da `CObject`:  
  
     [!code-cpp[NVC_MFCCObjectSample#1](../mfc/codesnippet/cpp/deriving-a-class-from-cobject_1.h)]  
  
 In genere, tuttavia, si consiglia di eseguire l'override di alcune delle `CObject`di funzioni membro per gestire le specifiche della nuova classe. Ad esempio, può in genere si desidera eseguire l'override di `Dump` funzione `CObject` per fornire output di debug per il contenuto della classe. Per informazioni dettagliate su come eseguire l'override `Dump`, vedere l'articolo [diagnostica: contenuto dell'oggetto dump](http://msdn.microsoft.com/en-us/727855b1-5a83-44bd-9fe3-f1d535584b59). È anche possibile eseguire l'override di `AssertValid` funzione `CObject` per una verifica personalizzata per convalidare la coerenza dei membri dati di oggetti della classe. Per una descrizione di come eseguire l'override `AssertValid`, vedere [ASSERT_VALID MFC e CObject:: AssertValid](http://msdn.microsoft.com/en-us/7654fb75-9e9a-499a-8165-0a96faf2d5e6).  
  
 L'articolo [specifica dei livelli di funzionalità](../mfc/specifying-levels-of-functionality.md) viene descritto come specificare altri livelli di funzionalità, incluse le informazioni di classe in fase di esecuzione, creazione dinamica di oggetti e la serializzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di CObject](../mfc/using-cobject.md)

