---
title: Accesso alle informazioni sulle classi di runtime
ms.date: 11/04/2016
helpviewer_keywords:
- CObject class [MFC], and RTTI
- CObject class [MFC], using IsKindOf method [MFC]
- run time [MFC], class information
- RUNTIME_CLASS macro [MFC]
- CObject class [MFC], using RUNTIME_CLASS macro [MFC]
- RTTI compiler option [MFC]
- CObject class [MFC], accessing run-time class information
- run time [MFC]
- IsKindOf method method [MFC]
- run-time class [MFC], accessing information
- classes [MFC], run-time class information
- run-time class [MFC]
- RUNTIME_CLASS macro, using
ms.assetid: 3445a9af-0bd6-4496-95c3-aa59b964570b
ms.openlocfilehash: 4a836bb7bd03bd6654e5c940442fecf541042fd1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81354219"
---
# <a name="accessing-run-time-class-information"></a>Accesso alle informazioni sulle classi di runtime

In questo articolo viene illustrato come accedere alle informazioni sulla classe di un oggetto in fase di esecuzione.

> [!NOTE]
> MFC non utilizza il supporto RTTI [(Run-Time Type Information)](../cpp/run-time-type-information.md) introdotto in Visual C

Se la classe è derivata da [CObject](../mfc/reference/cobject-class.md) e sono `IMPLEMENT_DYNCREATE`stati `DECLARE_SERIAL` utilizzati i metodi **DECLARE**_**DYNAMIC** e `IMPLEMENT_DYNAMIC`, e `DECLARE_DYNCREATE` o e `IMPLEMENT_SERIAL` illustrati nell'articolo Derivazione di [una classe da CObject](../mfc/deriving-a-class-from-cobject.md), la `CObject` classe è in grado di determinare la classe esatta di un oggetto in fase di esecuzione.

Questa capacità è molto utile quando è necessario un controllo di tipo aggiuntivo degli argomenti di funzione e quando è necessario scrivere codice per scopi specifici in base alla classe di un oggetto. Tuttavia questa operazione in genere non è consigliata in quanto duplica la funzionalità delle funzioni virtuali.

La funzione membro `CObject` di `IsKindOf` può essere utilizzata per determinare se un particolare oggetto appartiene a una classe specificata o se è derivato da una classe specifica. L'argomento per `IsKindOf` è un oggetto `CRuntimeClass`, che è possibile ottenere utilizzando la macro `RUNTIME_CLASS` con il nome della classe.

### <a name="to-use-the-runtime_class-macro"></a>Per utilizzare la macro RUNTIME_CLASS

1. Utilizzare `RUNTIME_CLASS` con il nome della classe, come illustrato di seguito per la classe `CObject`:

   [!code-cpp[NVC_MFCCObjectSample#4](../mfc/codesnippet/cpp/accessing-run-time-class-information_1.cpp)]

Raramente sarà necessario accedere direttamente all'oggetto della classe di runtime. Un altro utilizzo comune consiste nel passare l'oggetto della classe di runtime alla funzione `IsKindOf`, come illustrato nella procedura seguente. La funzione `IsKindOf` esegue dei test su un oggetto per vedere se appartiene a una determinata classe.

#### <a name="to-use-the-iskindof-function"></a>Per utilizzare la funzione IsKindOf

1. Assicurarsi che la classe disponga di supporto alle classi di runtime. Ovvero, la classe deve essere stata derivata direttamente o indirettamente `CObject` da e utilizzata `IMPLEMENT_SERIAL` le macro **DECLARE**_**DYNAMIC** e `IMPLEMENT_DYNAMIC`, `DECLARE_DYNCREATE` e `IMPLEMENT_DYNCREATE`, o `DECLARE_SERIAL` e illustrate nell'articolo Derivazione di una classe da [CObject](../mfc/deriving-a-class-from-cobject.md).

1. Chiamare la funzione membro `IsKindOf` per gli oggetti della classe, utilizzando la macro `RUNTIME_CLASS` per generare l'argomento `CRuntimeClass`, come illustrato di seguito:

   [!code-cpp[NVC_MFCCObjectSample#2](../mfc/codesnippet/cpp/accessing-run-time-class-information_2.h)]

   [!code-cpp[NVC_MFCCObjectSample#5](../mfc/codesnippet/cpp/accessing-run-time-class-information_3.cpp)]

    > [!NOTE]
    >  IsKindOf restituisce **TRUE** se l'oggetto è un membro della classe specificata o di una classe derivata dalla classe specificata. `IsKindOf` non supporta l'ereditarietà multipla o le classi base virtuali, sebbene, se necessario, sia possibile utilizzare l'ereditarietà multipla per le classi derivate di Microsoft Foundation.

Un utilizzo delle informazioni sulla classe di runtime è la creazione dinamica di oggetti. Questo processo è descritto nell'articolo [Creazione dinamica di oggetti](../mfc/dynamic-object-creation.md).

Per informazioni più dettagliate sulla serializzazione e sulle informazioni sulle classi in fase di esecuzione, vedere gli articoli [File in MFC](../mfc/files-in-mfc.md) e [Serializzazione](../mfc/serialization-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[Uso di CObject](../mfc/using-cobject.md)
