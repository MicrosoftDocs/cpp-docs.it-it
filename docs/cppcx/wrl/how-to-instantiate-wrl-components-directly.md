---
title: "Procedura: Creare direttamente un'istanza dei componenti WRL"
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: 1a9fa011-0cee-4abf-bf83-49adf53ff906
ms.openlocfilehash: 3caa29125de0de8cbe73379b8d7244206a5f9229
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58784828"
---
# <a name="how-to-instantiate-wrl-components-directly"></a>Procedura: Creare direttamente un'istanza dei componenti WRL

Informazioni su come usare la libreria di modelli C++ (WRL) di Windows Runtime[makeandinitialize](make-function.md) e [Microsoft::WRL::Details::MakeAndInitialize](makeandinitialize-function.md) funzioni per creare un'istanza di un componente dal modulo che lo definisce.

Creando componenti direttamente, è possibile ridurre il sovraccarico quando non è necessario class factory o altri meccanismi. È possibile creare un'istanza di un componente direttamente in entrambe le app Universal Windows Platform e nelle App desktop.

Per informazioni su come usare libreria modelli C++ per Windows Runtime per creare un componente COM classico e crearne un'istanza da un'app desktop esterna, vedere [come: Creare un componente COM classico](how-to-create-a-classic-com-component-using-wrl.md).

Questo documento illustra due esempi. Il primo esempio Usa il `Make` funzione per creare un'istanza di un componente. Il secondo esempio Usa il `MakeAndInitialize` funzione per creare un'istanza di un componente può avere esito negativo durante la costruzione. (Poiché COM Usa in genere, i valori HRESULT invece delle eccezioni, per indicare gli errori, un tipo COM in genere non viene generata dal costruttore. `MakeAndInitialize` consente a un componente convalidare gli argomenti relativi costruzione di `RuntimeClassInitialize` (metodo).) Entrambi gli esempi definiscono un'interfaccia del logger di base e implementano tale interfaccia definendo una classe che scrive i messaggi alla console.

> [!IMPORTANT]
> Non è possibile usare il `new` operatore per creare un'istanza di componenti Windows Runtime C++ Template Library. Pertanto, è consigliabile usare sempre `Make` o `MakeAndInitialize` creare direttamente un'istanza di un componente.

### <a name="to-create-and-instantiate-a-basic-logger-component"></a>Per creare e creare un'istanza di un componente di logger di base

1. In Visual Studio, creare un **applicazione Console Win32** progetto. Nome del progetto, ad esempio *WRLLogger*.

2. Aggiungere un **Midl File (. idl)** file al progetto, denominare il file `ILogger.idl`e quindi aggiungere questo codice:

   [!code-cpp[wrl-logger-make#1](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_1.idl)]

3. Usare il codice seguente sostituire il contenuto di `WRLLogger.cpp`.

   [!code-cpp[wrl-logger-make#2](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_2.cpp)]

### <a name="to-handle-construction-failure-for-the-basic-logger-component"></a>Per gestire gli errori di costruzione per il componente di logger di base

1. Usare il codice seguente per sostituire la definizione del `CConsoleWriter` classe. Questa versione contiene un membro stringa privata variabile ed esegue l'override di `RuntimeClass::RuntimeClassInitialize` (metodo). `RuntimeClassInitialize` si verifica un errore se la chiamata a `SHStrDup` ha esito negativo.

   [!code-cpp[wrl-logger-makeandinitialize#1](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_3.cpp)]

2. Usare il codice seguente per sostituire la definizione di `wmain`. Questa versione USA `MakeAndInitialize` per creare un'istanza di `CConsoleWriter` dell'oggetto e controlla il risultato HRESULT.

   [!code-cpp[wrl-logger-makeandinitialize#2](../codesnippet/CPP/how-to-instantiate-wrl-components-directly_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Libreria di modelli di Windows Runtime C++ (WRL)](windows-runtime-cpp-template-library-wrl.md)<br/>
[Microsoft::WRL::Make](make-function.md)<br/>
[Microsoft::WRL::Details::MakeAndInitialize](makeandinitialize-function.md)