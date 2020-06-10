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
ms.openlocfilehash: a9f90640007f84c854d59cc27e0c38459c76fe46
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619192"
---
# <a name="accessing-run-time-class-information"></a>Accesso alle informazioni sulle classi di runtime

In questo articolo viene illustrato come accedere alle informazioni sulla classe di un oggetto in fase di esecuzione.

> [!NOTE]
> MFC non utilizza il supporto per le [informazioni sui tipi in fase di esecuzione](../cpp/run-time-type-information.md) (RTTI) introdotto in Visual C++ 4,0.

Se la classe è stata derivata da [CObject](reference/cobject-class.md) e sono state usate le macro **Declare**_**Dynamic** e `IMPLEMENT_DYNAMIC` , `DECLARE_DYNCREATE` e `IMPLEMENT_DYNCREATE` o `DECLARE_SERIAL` e `IMPLEMENT_SERIAL` descritte nell'articolo [derivare una classe da CObject](deriving-a-class-from-cobject.md), la `CObject` classe è in grado di determinare la classe esatta di un oggetto in fase di esecuzione.

Questa capacità è molto utile quando è necessario un controllo di tipo aggiuntivo degli argomenti di funzione e quando è necessario scrivere codice per scopi specifici in base alla classe di un oggetto. Tuttavia questa operazione in genere non è consigliata in quanto duplica la funzionalità delle funzioni virtuali.

La funzione membro `CObject` di `IsKindOf` può essere utilizzata per determinare se un particolare oggetto appartiene a una classe specificata o se è derivato da una classe specifica. L'argomento per `IsKindOf` è un oggetto `CRuntimeClass`, che è possibile ottenere utilizzando la macro `RUNTIME_CLASS` con il nome della classe.

### <a name="to-use-the-runtime_class-macro"></a>Per utilizzare la macro RUNTIME_CLASS

1. Utilizzare `RUNTIME_CLASS` con il nome della classe, come illustrato di seguito per la classe `CObject`:

   [!code-cpp[NVC_MFCCObjectSample#4](codesnippet/cpp/accessing-run-time-class-information_1.cpp)]

Raramente sarà necessario accedere direttamente all'oggetto della classe di runtime. Un altro utilizzo comune consiste nel passare l'oggetto della classe di runtime alla funzione `IsKindOf`, come illustrato nella procedura seguente. La funzione `IsKindOf` esegue dei test su un oggetto per vedere se appartiene a una determinata classe.

#### <a name="to-use-the-iskindof-function"></a>Per utilizzare la funzione IsKindOf

1. Assicurarsi che la classe disponga di supporto alle classi di runtime. Ovvero la classe deve essere stata derivata direttamente o indirettamente da `CObject` e utilizzare le macro **Declare**_**Dynamic** e `IMPLEMENT_DYNAMIC` , `DECLARE_DYNCREATE` e `IMPLEMENT_DYNCREATE` o le `DECLARE_SERIAL` `IMPLEMENT_SERIAL` macro e descritte nell'articolo [derivare una classe da CObject](deriving-a-class-from-cobject.md).

1. Chiamare la funzione membro `IsKindOf` per gli oggetti della classe, utilizzando la macro `RUNTIME_CLASS` per generare l'argomento `CRuntimeClass`, come illustrato di seguito:

   [!code-cpp[NVC_MFCCObjectSample#2](codesnippet/cpp/accessing-run-time-class-information_2.h)]

   [!code-cpp[NVC_MFCCObjectSample#5](codesnippet/cpp/accessing-run-time-class-information_3.cpp)]

    > [!NOTE]
    >  IsKindOf restituisce **true** se l'oggetto è un membro della classe specificata o di una classe derivata dalla classe specificata. `IsKindOf` non supporta l'ereditarietà multipla o le classi base virtuali, sebbene, se necessario, sia possibile utilizzare l'ereditarietà multipla per le classi derivate di Microsoft Foundation.

Un utilizzo delle informazioni sulla classe di runtime è la creazione dinamica di oggetti. Questo processo viene illustrato nell'articolo [creazione dinamica di oggetti](dynamic-object-creation.md).

Per informazioni più dettagliate sulla serializzazione e sulle informazioni sulle classi di runtime, vedere gli articoli [file in MFC](files-in-mfc.md) e [serializzazione](serialization-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[Uso di CObject](using-cobject.md)
