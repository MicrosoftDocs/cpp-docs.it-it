---
title: Derivazione da una classe da CObject
ms.date: 11/04/2016
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
ms.openlocfilehash: 860af88512acb33ff3035b3a04609165953d80a8
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446972"
---
# <a name="deriving-a-class-from-cobject"></a>Derivazione da una classe da CObject

Questo articolo descrive i passaggi minimi necessari per derivare una classe da [CObject](../mfc/reference/cobject-class.md). Altri articoli `CObject` classe descrivono i passaggi necessari per sfruttare le funzionalità specifiche di `CObject`, ad esempio il supporto per la serializzazione e il debug diagnostico.

Nelle discussioni di `CObject`, i termini "file di interfaccia" e "file di implementazione" vengono usati di frequente. Il file di interfaccia (spesso denominato file di intestazione o. Il file H) contiene la dichiarazione di classe e qualsiasi altra informazione necessaria per usare la classe. Il file di implementazione (o. File CPP) contiene la definizione della classe e il codice che implementa le funzioni membro della classe. Ad esempio, per una classe denominata `CPerson`, in genere si crea un file di interfaccia denominato PERSON. H e un file di implementazione denominato PERSON. CPP. Tuttavia, per alcune classi di piccole dimensioni che non verranno condivise tra le applicazioni, è talvolta più semplice combinare l'interfaccia e l'implementazione in un singolo. File CPP.

È possibile scegliere tra quattro livelli di funzionalità per la derivazione di una classe da `CObject`:

- Funzionalità di base: nessun supporto per la serializzazione o le informazioni sulle classi in fase di esecuzione, ma include la gestione della memoria diagnostica.

- Funzionalità di base e supporto per le informazioni sulle classi in fase di esecuzione.

- Funzionalità di base e supporto per le informazioni sulle classi in fase di esecuzione e la creazione dinamica.

- Funzionalità di base e supporto per informazioni sulle classi in fase di esecuzione, creazione dinamica e serializzazione.

Le classi progettate per il riutilizzo, ovvero quelle che verranno utilizzate in un secondo momento come classi di base, devono includere almeno il supporto della serializzazione e il supporto delle classi di runtime, se è prevista una necessità di serializzazione futura.

È possibile scegliere il livello di funzionalità utilizzando specifiche macro di implementazione e di dichiarazione nella dichiarazione e implementazione delle classi derivate da `CObject`.

Nella tabella seguente viene illustrata la relazione tra le macro utilizzate per supportare le informazioni sulla serializzazione e la fase di esecuzione.

### <a name="macros-used-for-serialization-and-run-time-information"></a>Macro utilizzate per la serializzazione e le informazioni di run-time

|Macro utilizzata|CObject::IsKindOf|CRuntimeClass::<br /><br /> CreateObject|> CArchive:: operator ><br /><br /> < CArchive:: operator <|
|----------------|-----------------------|--------------------------------------|-------------------------------------------------------|
|Funzionalità di base `CObject`|No|No|No|
|`DECLARE_DYNAMIC`|Sì|No|No|
|`DECLARE_DYNCREATE`|Sì|Sì|No|
|`DECLARE_SERIAL`|Sì|Sì|Sì|

#### <a name="to-use-basic-cobject-functionality"></a>Per usare la funzionalità CObject di base

1. Usare la sintassi C++ normale per derivare la classe da `CObject` o da una classe derivata da `CObject`.

   Nell'esempio seguente viene illustrato il caso più semplice, ovvero la derivazione di una classe da `CObject`:

   [!code-cpp[NVC_MFCCObjectSample#1](../mfc/codesnippet/cpp/deriving-a-class-from-cobject_1.h)]

In genere, tuttavia, potrebbe essere necessario eseguire l'override di alcune delle funzioni membro di `CObject`per gestire le specifiche della nuova classe. È possibile, ad esempio, che in genere si desideri eseguire l'override della funzione `Dump` di `CObject` per fornire l'output di debug per il contenuto della classe. Per informazioni dettagliate su come eseguire l'override di `Dump`, vedere l'articolo [personalizzazione del dump di oggetti](/previous-versions/visualstudio/visual-studio-2010/sc15kz85(v=vs.100)). È anche possibile eseguire l'override della funzione `AssertValid` di `CObject` per fornire test personalizzati per convalidare la coerenza dei membri dati degli oggetti classe. Per una descrizione di come eseguire l'override di `AssertValid`, vedere [MFC ASSERT_VALID e CObject:: AssertValid](reference/diagnostic-services.md#assert_valid).

L'articolo che [specifica i livelli di funzionalità](../mfc/specifying-levels-of-functionality.md) descrive come specificare altri livelli di funzionalità, tra cui informazioni sulle classi in fase di esecuzione, creazione dinamica di oggetti e serializzazione.

## <a name="see-also"></a>Vedere anche

[Uso di CObject](../mfc/using-cobject.md)
