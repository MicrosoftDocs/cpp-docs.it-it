---
description: "Altre informazioni su: procedura: creare direttamente un'istanza di componenti WRL"
title: "Procedura: creare direttamente un'istanza dei componenti WRL"
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: 1a9fa011-0cee-4abf-bf83-49adf53ff906
ms.openlocfilehash: 424b3ec70921de9558fd8c5035e96b2fe4d58f7b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249893"
---
# <a name="how-to-instantiate-wrl-components-directly"></a>Procedura: creare direttamente un'istanza dei componenti WRL

Informazioni su come usare le funzioni Windows Runtime WRL (C++ Template Library)[Microsoft:: WRL:: make](make-function.md) e [Microsoft:: WRL::D etails:: MakeAndInitialize](makeandinitialize-function.md) per creare un'istanza di un componente dal modulo che lo definisce.

Creando direttamente un'istanza di componenti, è possibile ridurre il sovraccarico quando non sono necessari class factory o altri meccanismi. È possibile creare un'istanza di un componente direttamente sia in piattaforma UWP (Universal Windows Platform) app che nelle app desktop.

Per informazioni su come usare Windows Runtime libreria di modelli C++ per creare un componente COM classico e crearne un'istanza da un'app desktop esterna, vedere [procedura: creare un componente COM classico](how-to-create-a-classic-com-component-using-wrl.md).

In questo documento vengono illustrati due esempi. Nel primo esempio viene utilizzata la `Make` funzione per creare un'istanza di un componente. Nel secondo esempio viene usata la `MakeAndInitialize` funzione per creare un'istanza di un componente che può avere esito negativo durante la costruzione. Poiché COM USA in genere i valori HRESULT, anziché le eccezioni, per indicare gli errori, un tipo COM in genere non viene generato dal relativo costruttore. `MakeAndInitialize` consente a un componente di convalidare gli argomenti di costruzione tramite il `RuntimeClassInitialize` metodo. Entrambi gli esempi definiscono un'interfaccia del logger di base e implementano tale interfaccia definendo una classe che scrive i messaggi nella console.

> [!IMPORTANT]
> Non è possibile usare l' `new` operatore per creare un'istanza di Windows Runtime componenti della libreria di modelli C++. È pertanto consigliabile utilizzare sempre `Make` o `MakeAndInitialize` per creare direttamente un'istanza di un componente.

### <a name="to-create-and-instantiate-a-basic-logger-component"></a>Per creare e creare un'istanza di un componente logger di base

1. In Visual Studio creare un progetto di **applicazione console Win32** . Assegnare un nome al progetto, ad esempio *WRLLogger*.

2. Aggiungere un file **MIDL (file con estensione IDL)** al progetto, assegnare un nome al file `ILogger.idl` e quindi aggiungere il codice seguente:

   [!code-cpp[wrl-logger-make#1](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_1.idl)]

3. Usare il codice seguente per sostituire il contenuto di `WRLLogger.cpp` .

   [!code-cpp[wrl-logger-make#2](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_2.cpp)]

### <a name="to-handle-construction-failure-for-the-basic-logger-component"></a>Per gestire gli errori di costruzione per il componente logger di base

1. Usare il codice seguente per sostituire la definizione della `CConsoleWriter` classe. Questa versione include una variabile membro di stringa privata ed esegue l'override del `RuntimeClass::RuntimeClassInitialize` metodo. `RuntimeClassInitialize` esito negativo se la chiamata a ha `SHStrDup` esito negativo.

   [!code-cpp[wrl-logger-makeandinitialize#1](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_3.cpp)]

2. Usare il codice seguente per sostituire la definizione di `wmain` . Questa versione USA `MakeAndInitialize` per creare un'istanza dell' `CConsoleWriter` oggetto e controllare il risultato HRESULT.

   [!code-cpp[wrl-logger-makeandinitialize#2](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_4.cpp)]

## <a name="see-also"></a>Vedi anche

[Libreria di modelli di Windows Runtime C++ (WRL)](windows-runtime-cpp-template-library-wrl.md)<br/>
[Microsoft:: WRL:: make](make-function.md)<br/>
[Microsoft:: WRL::D etails:: MakeAndInitialize](makeandinitialize-function.md)
