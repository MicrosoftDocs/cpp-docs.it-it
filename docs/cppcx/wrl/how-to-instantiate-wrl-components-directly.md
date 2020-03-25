---
title: "Procedura: creare direttamente un'istanza dei componenti WRL"
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: 1a9fa011-0cee-4abf-bf83-49adf53ff906
ms.openlocfilehash: f291e982d7f77c63821e5943a5867662ccd1b4fa
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213902"
---
# <a name="how-to-instantiate-wrl-components-directly"></a>Procedura: creare direttamente un'istanza dei componenti WRL

Informazioni su come usare le funzioni C++ WRL (Windows Runtime Template Library)[Microsoft:: WRL:: make](make-function.md) e [microsoft:: WRL::D etails:: MakeAndInitialize](makeandinitialize-function.md) per creare un'istanza di un componente dal modulo che lo definisce.

Creando direttamente un'istanza di componenti, è possibile ridurre il sovraccarico quando non sono necessari class factory o altri meccanismi. È possibile creare un'istanza di un componente direttamente sia in piattaforma UWP (Universal Windows Platform) app che nelle app desktop.

Per informazioni su come usare Windows Runtime C++ libreria di modelli per creare un componente COM classico e crearne un'istanza da un'app desktop esterna, vedere [procedura: creare un componente COM classico](how-to-create-a-classic-com-component-using-wrl.md).

In questo documento vengono illustrati due esempi. Nel primo esempio viene utilizzata la funzione `Make` per creare un'istanza di un componente. Nel secondo esempio viene usata la funzione `MakeAndInitialize` per creare un'istanza di un componente che può avere esito negativo durante la costruzione. Poiché COM USA in genere i valori HRESULT, anziché le eccezioni, per indicare gli errori, un tipo COM in genere non viene generato dal relativo costruttore. `MakeAndInitialize` consente a un componente di convalidare gli argomenti di costruzione tramite il metodo di `RuntimeClassInitialize`. Entrambi gli esempi definiscono un'interfaccia del logger di base e implementano tale interfaccia definendo una classe che scrive i messaggi nella console.

> [!IMPORTANT]
> Non è possibile usare l'operatore `new` per creare un' C++ istanza dei componenti della libreria di modelli Windows Runtime. È pertanto consigliabile utilizzare sempre `Make` o `MakeAndInitialize` per creare direttamente un'istanza di un componente.

### <a name="to-create-and-instantiate-a-basic-logger-component"></a>Per creare e creare un'istanza di un componente logger di base

1. In Visual Studio creare un progetto di **applicazione console Win32** . Assegnare un nome al progetto, ad esempio *WRLLogger*.

2. Aggiungere un file di **file MIDL (IDL)** al progetto, denominare il file `ILogger.idl`e quindi aggiungere il codice seguente:

   [!code-cpp[wrl-logger-make#1](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_1.idl)]

3. Usare il codice seguente per sostituire il contenuto di `WRLLogger.cpp`.

   [!code-cpp[wrl-logger-make#2](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_2.cpp)]

### <a name="to-handle-construction-failure-for-the-basic-logger-component"></a>Per gestire gli errori di costruzione per il componente logger di base

1. Usare il codice seguente per sostituire la definizione della classe `CConsoleWriter`. Questa versione include una variabile membro di stringa privata ed esegue l'override del metodo `RuntimeClass::RuntimeClassInitialize`. `RuntimeClassInitialize` ha esito negativo se la chiamata a `SHStrDup` ha esito negativo.

   [!code-cpp[wrl-logger-makeandinitialize#1](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_3.cpp)]

2. Usare il codice seguente per sostituire la definizione di `wmain`. Questa versione USA `MakeAndInitialize` per creare un'istanza dell'oggetto `CConsoleWriter` e controlla il risultato HRESULT.

   [!code-cpp[wrl-logger-makeandinitialize#2](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Libreria di modelli di Windows Runtime C++ (WRL)](windows-runtime-cpp-template-library-wrl.md)<br/>
[Microsoft:: WRL:: make](make-function.md)<br/>
[Microsoft:: WRL::D etails:: MakeAndInitialize](makeandinitialize-function.md)
