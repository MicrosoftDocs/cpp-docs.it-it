---
title: 'Procedura: creare un componente COM classico mediante WRL | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: 5efe7690-90d5-4c3c-9e53-11a14cefcb19
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3fc09c75c4667ee3dd0c186f5ca465047adb1023
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40013167"
---
# <a name="how-to-create-a-classic-com-component-using-wrl"></a>Procedura: creare un componente COM classico mediante WRL
È possibile usare la libreria di modelli C++ (WRL) di Windows Runtime per creare i componenti COM classici base per l'uso nelle App desktop, oltre a usarlo per le app Universal Windows Platform (UWP). Per la creazione di componenti COM, la libreria di modelli di Windows Runtime C++ può richiedere meno codice rispetto ad ATL. Per informazioni sul subset di COM che supporta la libreria di modelli di Windows Runtime C++, vedere [libreria modelli C++ (WRL) di Windows Runtime](../windows/windows-runtime-cpp-template-library-wrl.md).  
  
 Questo documento illustra come usare la libreria di modelli di Windows Runtime C++ per creare un componente COM di base. Sebbene sia possibile usare il meccanismo di distribuzione che meglio si adatta alle proprie esigenze, questo documento illustra anche un metodo di base per registrare e utilizzare il componente COM da un'app desktop.  
  
### <a name="to-use-the-windows-runtime-c-template-library-to-create-a-basic-classic-com-component"></a>Usare la libreria di modelli di Windows Runtime C++ per creare un componente COM di base  
  
1.  In Visual Studio, creare un **soluzione vuota** progetto. Denominare il progetto, ad esempio, `WRLClassicCOM`.  
  
2.  Aggiungere un **progetto Win32** alla soluzione. Denominare il progetto, ad esempio, `CalculatorComponent`. Nel **Application Settings** scheda, seleziona **DLL**.  
  
3.  Aggiungere un **Midl File (. idl)** file al progetto. Denominare il file, ad esempio, `CalculatorComponent.idl`.  
  
4.  Aggiungere questo codice a CalculatorComponent.idl:  
  
     [!code-cpp[wrl-classic-com-component#1](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_1.idl)]  
  
5.  Nelle `CalculatorComponent.cpp`, definire il `CalculatorComponent` classe. Il `CalculatorComponent` classe eredita da [Microsoft::WRL::RuntimeClass](../windows/runtimeclass-class.md). [Microsoft::WRL::RuntimeClassFlags\<ClassicCom >](../windows/runtimeclassflags-structure.md) specifica che la classe deriva dalla [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509\(v=vs.85\).aspx) e non [IInspectable](http://msdn.microsoft.com/library/br205821\(v=vs.85\).aspx). (`IInspectable` è disponibile solo per i componenti di app di Windows Runtime.) `CoCreatableClass` crea una factory per la classe che può essere utilizzata con le funzioni, ad esempio [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615\(v=vs.85\).aspx).  
  
     [!code-cpp[wrl-classic-com-component#2](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_2.cpp)]  
  
6.  Usare il codice seguente per sostituire il codice in `dllmain.cpp`. Questo file definisce le funzioni di esportazione DLL. Queste funzioni usano la [Microsoft::WRL::Module](../windows/module-class.md) classe per gestire le class factory per il modulo.  
  
     [!code-cpp[wrl-classic-com-component#3](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_3.cpp)]  
  
7.  Aggiungere un **File di definizione moduli (def)** file al progetto. Denominare il file, ad esempio, `CalculatorComponent.def`. Questo file fornisce al linker i nomi delle funzioni da esportare.  
  
8.  Aggiungere questo codice a CalculatorComponent.def:  
  
    ```
    LIBRARY

    EXPORTS
        DllGetActivationFactory PRIVATE
        DllGetClassObject       PRIVATE
        DllCanUnloadNow         PRIVATE  
    ```

9. Aggiungere runtimeobject.lib alla riga del linker. Per altre informazioni, vedere [. File LIB come Input del Linker](../build/reference/dot-lib-files-as-linker-input.md).  
  
### <a name="to-consume-the-com-component-from-a-desktop-app"></a>Per utilizzare il componente COM da un'app desktop  
  
1.  Registrare il componente COM con il Registro di sistema di Windows. A tale scopo, creare un file di voci di registrazione, denominarlo `RegScript.reg`e aggiungere il testo seguente. Sostituire  *\<dll-path >* con il percorso della DLL, ad esempio, `C:\temp\WRLClassicCOM\Debug\CalculatorComponent.dll`.  
  
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
  
2.  Eseguire regscript. reg oppure aggiungerlo al progetto **evento post-compilazione**. Per altre informazioni, vedere [pre-compilazione/Post-compilazione riga di comando finestra di dialogo eventi](/visualstudio/ide/reference/pre-build-event-post-build-event-command-line-dialog-box).  
  
3.  Aggiungere un **applicazione Console Win32** progetto alla soluzione. Denominare il progetto, ad esempio, `Calculator`.  
  
4.  Usare questo codice sostituire il contenuto di `Calculator.cpp`:  
  
     [!code-cpp[wrl-classic-com-component#6](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_6.cpp)]  
  
## <a name="robust-programming"></a>Programmazione efficiente  
 Questo documento Usa funzioni COM standard per dimostrare che è possibile usare la libreria di modelli di Windows Runtime C++ per creare un componente COM e renderlo disponibile per qualsiasi tecnologia abilitata COM. È anche possibile usare i tipi di libreria modelli C++ per Windows Runtime, ad esempio [Microsoft::WRL::ComPtr](../windows/comptr-class.md) nella tua app desktop per gestire la durata di COM e altri oggetti. Il codice seguente usa la libreria di modelli di Windows Runtime C++ per gestire la durata del `ICalculatorComponent` puntatore. La classe `CoInitializeWrapper` è un wrapper RAII che garantisce che la libreria COM venga liberata e che la sua durata sia superiore a quella dell'oggetto del puntatore intelligente `ComPtr`.  
  
 [!code-cpp[wrl-classic-com-component#7](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di modelli di Windows Runtime C++ (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)