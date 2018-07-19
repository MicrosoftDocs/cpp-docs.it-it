---
title: Derivazione di una classe da CObject | Microsoft Docs
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
ms.openlocfilehash: 05828283f560e73d4c5d2ddf2cbc05963cbb217f
ms.sourcegitcommit: 76fd30ff3e0352e2206460503b61f45897e60e4f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/13/2018
ms.locfileid: "39026117"
---
# <a name="deriving-a-class-from-cobject"></a>Derivazione da una classe da CObject
Questo articolo descrive i passaggi minimi necessari per derivare una classe dalla classe [CObject](../mfc/reference/cobject-class.md). Altri `CObject` classe articoli descrivono i passaggi necessari per sfruttare i vantaggi di specifico `CObject` funzionalità, ad esempio la serializzazione e di diagnostica supporto del debug.  
  
 Negli argomenti relativi a `CObject`, le condizioni per l'interfaccia "file" e "file di implementazione" vengono usati frequentemente. Il file di interfaccia (chiamati anche il file di intestazione, o. File H) contiene la dichiarazione di classe e qualsiasi altra informazione necessaria per usare la classe. Il file di implementazione (o. File CPP) contiene la definizione di classe, nonché il codice che implementa le funzioni membro di classe. Ad esempio, per una classe denominata `CPerson`, si creerà in genere un file di interfaccia denominato persona. H e un file di implementazione denominata PERSON. CPP. Tuttavia, per alcune classi di piccole dimensioni che non verrà condiviso tra le applicazioni, è talvolta più facilmente combinabili l'interfaccia e l'implementazione in una singola. File CPP.  
  
 È possibile scegliere tra quattro livelli di funzionalità quando si deriva una classe dalla classe `CObject`:  
  
-   Funzionalità di base: nessun supporto per la serializzazione o informazioni sulle classi in fase di esecuzione ma include la gestione diagnostica della memoria.  
  
-   Informazioni sulla classe funzionalità di base, oltre al supporto di run-time.  
  
-   Funzionalità di base oltre al supporto per la creazione dinamica e informazioni sulle classi in fase di esecuzione.  
  
-   Funzionalità di base oltre al supporto per informazioni sulle classi in fase di esecuzione, la creazione dinamica e la serializzazione.  
  
 Classi progettate per essere riutilizzate (quelli che servirà in un secondo momento come classi di base) devono includere almeno il supporto di classi di runtime e il supporto della serializzazione, se prevede tutte le esigenze di serializzazione futuri.  
  
 Si sceglie il livello di funzionalità usando le macro specifiche di dichiarazione e implementazione nella dichiarazione e implementazione delle classi di derivazione `CObject`.  
  
 Nella tabella seguente viene illustrata la relazione tra le macro utilizzate per supportare la serializzazione e informazioni di run-time.  
  
### <a name="macros-used-for-serialization-and-run-time-information"></a>Macro utilizzate per la serializzazione e informazioni di Run-Time  
  
|Utilizzato (macro)|CObject:: IsKindOf|CRuntimeClass::<br /><br /> CreateObject|CArchive::operator >><br /><br /> CArchive::operator <<|  
|----------------|-----------------------|--------------------------------------|-------------------------------------------------------|  
|Base `CObject` funzionalità|No|No|No|  
|`DECLARE_DYNAMIC`|Sì|No|No|  
|`DECLARE_DYNCREATE`|Yes|Yes|No|  
|`DECLARE_SERIAL`|Yes|Yes|Yes|  
  
#### <a name="to-use-basic-cobject-functionality"></a>Usare la funzionalità di base da CObject  
  
1.  Per derivare la classe da utilizzare la sintassi C++ normale `CObject` (o da una classe derivata da `CObject`).  
  
     Nell'esempio seguente viene illustrato il caso più semplice, la derivazione di una classe da `CObject`:  
  
     [!code-cpp[NVC_MFCCObjectSample#1](../mfc/codesnippet/cpp/deriving-a-class-from-cobject_1.h)]  
  
 In genere, tuttavia, è possibile eseguire l'override di alcune delle `CObject`di funzioni membro per gestire le specifiche della nuova classe. Ad esempio, è in genere possibile eseguire l'override di `Dump` funzione di `CObject` per fornire l'output di debug per il contenuto della classe. Per informazioni dettagliate su come eseguire l'override `Dump`, vedere l'articolo [diagnostica: il dump di oggetti contenuto](http://msdn.microsoft.com/727855b1-5a83-44bd-9fe3-f1d535584b59). È anche possibile eseguire l'override di `AssertValid` funzione di `CObject` per una verifica personalizzata per convalidare la coerenza dei membri dati degli oggetti classe. Per una descrizione di come eseguire l'override `AssertValid`, vedere [ASSERT_VALID e MFC CObject:: AssertValid](http://msdn.microsoft.com/7654fb75-9e9a-499a-8165-0a96faf2d5e6).  
  
 L'articolo [specificando i livelli di funzionalità](../mfc/specifying-levels-of-functionality.md) viene descritto come specificare gli altri livelli di funzionalità, tra cui informazioni sulle classi in fase di esecuzione, creazione di oggetti dinamici e la serializzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di CObject](../mfc/using-cobject.md)

