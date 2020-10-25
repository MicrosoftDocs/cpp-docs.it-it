---
title: 'Procedura: creare un componente COM classico mediante WRL'
description: Utilizzare la libreria di modelli C++ Windows Runtime (WRL) per creare componenti COM classici di base da utilizzare nelle applicazioni desktop.
ms.date: 10/23/2020
ms.topic: reference
ms.openlocfilehash: 417c2e4635b380717662fa0762062f0228659de4
ms.sourcegitcommit: bf54b407169900bb668c85a67b31dbc0f069fe65
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2020
ms.locfileid: "92497204"
---
# <a name="how-to-create-a-classic-com-component-using-wrl"></a>Procedura: creare un componente COM classico mediante WRL

È possibile usare la libreria di modelli C++ Windows Runtime (WRL) per creare componenti COM classici di base da usare nelle app desktop, oltre a usarli per le app piattaforma UWP (Universal Windows Platform) (UWP). Per la creazione di componenti COM, la libreria di modelli di Windows Runtime C++ potrebbe richiedere meno codice rispetto a ATL. Per informazioni sul subset di COM supportato dalla libreria di modelli Windows Runtime C++, vedere la pagina relativa alla [libreria di modelli c++ Windows Runtime (WRL)](windows-runtime-cpp-template-library-wrl.md).

In questo documento viene illustrato come utilizzare la libreria di modelli C++ Windows Runtime per creare un componente COM di base. Sebbene sia possibile usare il meccanismo di distribuzione che meglio si adatta alle proprie esigenze, questo documento illustra anche un metodo di base per registrare e utilizzare il componente COM da un'app desktop.

### <a name="to-use-the-windows-runtime-c-template-library-to-create-a-basic-classic-com-component"></a>Per utilizzare la libreria di modelli C++ Windows Runtime per creare un componente COM classico di base

1. In Visual Studio creare un progetto di **soluzione vuota** . Assegnare un nome al progetto, ad esempio `WRLClassicCOM` .

2. Aggiungere un **progetto Win32** alla soluzione. Assegnare un nome al progetto, ad esempio `CalculatorComponent` . Nella scheda **Impostazioni applicazione** selezionare **dll**.

3. Aggiungere un file di **file MIDL (IDL)** al progetto. Assegnare un nome al file, ad esempio `CalculatorComponent.idl` .

4. Aggiungere questo codice a CalculatorComponent.idl:

   [!code-cpp[wrl-classic-com-component#1](../codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_1.idl)]

5. In CalculatorComponent.cpp definire la classe `CalculatorComponent`. La `CalculatorComponent` classe eredita da [Microsoft:: WRL:: RuntimeClass](runtimeclass-class.md). [Microsoft:: WRL:: RuntimeClassFlags \<ClassicCom> ](runtimeclassflags-structure.md) Specifica che la classe deriva da [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) e non da [IInspectable](/windows/win32/api/inspectable/nn-inspectable-iinspectable). ( `IInspectable` è disponibile solo per Windows Runtime componenti dell'app). `CoCreatableClass` Crea una factory per la classe che può essere utilizzata con funzioni quali [CoCreateInstance](/windows/win32/api/combaseapi/nf-combaseapi-cocreateinstance).

   [!code-cpp[wrl-classic-com-component#2](../codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_2.cpp)]

6. Usare il codice seguente per sostituire il codice in `dllmain.cpp` . Questo file definisce le funzioni di esportazione DLL. Queste funzioni usano la classe [Microsoft:: WRL:: module](module-class.md) per gestire le class factory per il modulo.

   [!code-cpp[wrl-classic-com-component#3](../codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_3.cpp)]

7. Aggiungere un file di **definizione del modulo (con estensione def)** al progetto. Assegnare un nome al file, ad esempio `CalculatorComponent.def` . Questo file fornisce al linker i nomi delle funzioni da esportare. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto, quindi in **proprietà di configurazione**  >  **input linker**  >  **Input**impostare la proprietà del file di **definizione del modulo** sul file def.

8. Aggiungere questo codice a CalculatorComponent.def:

    ```
    LIBRARY

    EXPORTS
        DllGetActivationFactory PRIVATE
        DllGetClassObject       PRIVATE
        DllCanUnloadNow         PRIVATE
    ```

9. Aggiungere runtimeobject.lib alla riga del linker. Per informazioni, vedere [ `.Lib` file come input del linker](../../build/reference/dot-lib-files-as-linker-input.md).

### <a name="to-consume-the-com-component-from-a-desktop-app"></a>Per utilizzare il componente COM da un'app desktop

1. Registrare il componente COM con il Registro di sistema di Windows. A tale scopo, creare un file di voci di registrazione, denominarlo `RegScript.reg` e aggiungere il testo seguente. Sostituire *\<dll-path>* con il percorso della dll, ad esempio `C:\temp\WRLClassicCOM\Debug\CalculatorComponent.dll` .

    ```
    Windows Registry Editor Version 5.00

    [HKEY_CLASSES_ROOT\Wow6432Node\CLSID\{E68F5EDD-6257-4E72-A10B-4067ED8E85F2}]
    @="CalculatorComponent Class"

    [HKEY_CLASSES_ROOT\Wow6432Node\CLSID\{E68F5EDD-6257-4E72-A10B-4067ED8E85F2}\InprocServer32]
    @="<dll-path>"
    "ThreadingModel"="Apartment"

    [HKEY_CLASSES_ROOT\Wow6432Node\CLSID\{E68F5EDD-6257-4E72-A10B-4067ED8E85F2}\Programmable]

    [HKEY_CLASSES_ROOT\Wow6432Node\CLSID\{E68F5EDD-6257-4E72-A10B-4067ED8E85F2}\TypeLib]
    @="{9D3E6826-CB8E-4D86-8B14-89F0D7EFCD01}"

    [HKEY_CLASSES_ROOT\Wow6432Node\CLSID\{E68F5EDD-6257-4E72-A10B-4067ED8E85F2}\Version]
    @="1.0"
    ```

2. Eseguire RegScript. reg o aggiungerlo all' **evento di post-compilazione**del progetto. Per ulteriori informazioni, vedere la finestra di [dialogo riga di comando eventi pre-compilazione/post-compilazione](/visualstudio/ide/reference/pre-build-event-post-build-event-command-line-dialog-box).

3. Aggiungere un progetto di **applicazione console Win32** alla soluzione. Assegnare un nome al progetto, ad esempio `Calculator` .

4. Usare questo codice per sostituire il contenuto di `Calculator.cpp` :

   [!code-cpp[wrl-classic-com-component#6](../codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_6.cpp)]

## <a name="robust-programming"></a>Programmazione efficiente

In questo documento vengono utilizzate le funzioni COM standard per dimostrare che è possibile utilizzare la libreria di modelli C++ Windows Runtime per creare un componente COM e renderlo disponibile a qualsiasi tecnologia abilitata per COM. È anche possibile usare Windows Runtime tipi di libreria di modelli C++, ad esempio [Microsoft:: WRL:: ComPtr](comptr-class.md) , nell'app desktop per gestire la durata di com e altri oggetti. Il codice seguente usa la libreria di modelli C++ Windows Runtime per gestire la durata del `ICalculatorComponent` puntatore. La classe `CoInitializeWrapper` è un wrapper RAII che garantisce che la libreria COM venga liberata e che la sua durata sia superiore a quella dell'oggetto del puntatore intelligente `ComPtr`.

[!code-cpp[wrl-classic-com-component#7](../codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_7.cpp)]

## <a name="see-also"></a>Vedi anche

[Libreria di modelli di Windows Runtime C++ (WRL)](windows-runtime-cpp-template-library-wrl.md)
