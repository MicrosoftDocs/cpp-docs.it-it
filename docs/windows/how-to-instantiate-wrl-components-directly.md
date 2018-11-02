---
title: "Procedura: creare direttamente un'istanza dei componenti WRL"
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: 1a9fa011-0cee-4abf-bf83-49adf53ff906
ms.openlocfilehash: 2da1bd65631d33f3e1edb67efb5e94f270f1f1ea
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50523188"
---
# <a name="how-to-instantiate-wrl-components-directly"></a>Procedura: creare direttamente un'istanza dei componenti WRL

Informazioni su come usare la libreria di modelli C++ (WRL) di Windows Runtime[makeandinitialize](../windows/make-function.md) e [Microsoft::WRL::Details::MakeAndInitialize](../windows/makeandinitialize-function.md) funzioni per creare un'istanza di un componente dal modulo che lo definisce.

Creando componenti direttamente, è possibile ridurre il sovraccarico quando non è necessario class factory o altri meccanismi. È possibile creare un'istanza di un componente direttamente in entrambe le app Universal Windows Platform e nelle App desktop.

Per informazioni su come usare libreria modelli C++ per Windows Runtime per creare un componente COM classico e crearne un'istanza da un'app desktop esterna, vedere [procedura: creare un componente COM classico](../windows/how-to-create-a-classic-com-component-using-wrl.md).

Questo documento illustra due esempi. Il primo esempio Usa il `Make` funzione per creare un'istanza di un componente. Il secondo esempio Usa il `MakeAndInitialize` funzione per creare un'istanza di un componente può avere esito negativo durante la costruzione. (Poiché COM Usa in genere, i valori HRESULT invece delle eccezioni, per indicare gli errori, un tipo COM in genere non viene generata dal costruttore. `MakeAndInitialize` consente a un componente convalidare gli argomenti relativi costruzione di `RuntimeClassInitialize` (metodo).) Entrambi gli esempi definiscono un'interfaccia del logger di base e implementano tale interfaccia definendo una classe che scrive i messaggi alla console.

> [!IMPORTANT]
> Non è possibile usare la **nuovo** operatore per creare un'istanza di componenti Windows Runtime C++ Template Library. Pertanto, è consigliabile usare sempre `Make` o `MakeAndInitialize` creare direttamente un'istanza di un componente.

### <a name="to-create-and-instantiate-a-basic-logger-component"></a>Per creare e creare un'istanza di un componente di logger di base

1. In Visual Studio, creare un **applicazione Console Win32** progetto. Nome del progetto, ad esempio *WRLLogger*.

2. Aggiungere un **Midl File (. idl)** file al progetto, denominare il file `ILogger.idl`e quindi aggiungere questo codice:

   [!code-cpp[wrl-logger-make#1](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_1.idl)]

3. Usare il codice seguente sostituire il contenuto di `WRLLogger.cpp`.

   [!code-cpp[wrl-logger-make#2](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_2.cpp)]

### <a name="to-handle-construction-failure-for-the-basic-logger-component"></a>Per gestire gli errori di costruzione per il componente di logger di base

1. Usare il codice seguente per sostituire la definizione del `CConsoleWriter` classe. Questa versione contiene un membro stringa privata variabile ed esegue l'override di `RuntimeClass::RuntimeClassInitialize` (metodo). `RuntimeClassInitialize` si verifica un errore se la chiamata a `SHStrDup` ha esito negativo.

   [!code-cpp[wrl-logger-makeandinitialize#1](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_3.cpp)]

2. Usare il codice seguente per sostituire la definizione di `wmain`. Questa versione USA `MakeAndInitialize` per creare un'istanza di `CConsoleWriter` dell'oggetto e controlla il risultato HRESULT.

   [!code-cpp[wrl-logger-makeandinitialize#2](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Libreria di modelli di Windows Runtime C++ (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)<br/>
[Makeandinitialize](../windows/make-function.md)<br/>
[Microsoft::WRL::Details::MakeAndInitialize](../windows/makeandinitialize-function.md)