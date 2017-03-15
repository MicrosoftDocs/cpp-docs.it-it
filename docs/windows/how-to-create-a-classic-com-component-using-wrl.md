---
title: "Procedura: creare un componente COM classico mediante WRL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 5efe7690-90d5-4c3c-9e53-11a14cefcb19
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Procedura: creare un componente COM classico mediante WRL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile usare la [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] ([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]) per creare componenti COM classici di base da usare nelle app desktop, oltre che nelle app di [!INCLUDE[win8_appstore_long](../build/reference/includes/win8_appstore_long_md.md)]. Per la creazione di componenti COM, [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] può richiedere meno codice rispetto ad ATL. Per informazioni sul sottoinsieme di COM che i [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] supportati, vedere [libreria modelli C++ (WRL) di Windows Runtime](../windows/windows-runtime-cpp-template-library-wrl.md).  
  
 Questo documento illustra come usare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per creare un componente COM di base. Sebbene sia possibile usare il meccanismo di distribuzione che meglio si adatta alle proprie esigenze, questo documento illustra anche un metodo di base per registrare e utilizzare il componente COM da un'app desktop.  
  
### <a name="to-use-the-includecppwrlshorttokencppwrlshortmdmd-to-create-a-basic-classic-com-component"></a>Per usare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per creare un componente COM di base  
  
1.  In Visual Studio, creare un **soluzione vuota** progetto. Denominare il progetto, ad esempio, `WRLClassicCOM`.  
  
2.  Aggiungere un **progetto Win32** alla soluzione. Denominare il progetto, ad esempio, `CalculatorComponent`. Nel **le impostazioni dell'applicazione** selezionare **DLL**.  
  
3.  Aggiungere un **Midl File (IDL)** file al progetto. Nome del file, ad esempio, `CalculatorComponent.idl`.  
  
4.  Aggiungere questo codice a CalculatorComponent.idl:  
  
     [!code-cpp[wrl-classic-com-component#1](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_1.idl)]  
  
5.  In CalculatorComponent.cpp definire la classe `CalculatorComponent`. La `CalculatorComponent` classe eredita da [Microsoft::WRL::RuntimeClass](../windows/runtimeclass-class.md). [Microsoft::WRL::RuntimeClassFlags \< ClassicCom>](../windows/runtimeclassflags-structure.md) Specifica che la classe deriva da [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509\(v=vs.85\).aspx) e non [IInspectable](http://msdn.microsoft.com/library/br205821\(v=vs.85\).aspx). (`IInspectable` è disponibile solo per [!INCLUDE[win8_appstore_short](../windows/includes/win8_appstore_short_md.md)] i componenti dell'app.) `CoCreatableClass` Crea una factory per la classe che può essere utilizzata con funzioni, ad esempio [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615\(v=vs.85\).aspx).  
  
     [!code-cpp[wrl-classic-com-component#2](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_2.cpp)]  
  
6.  Sostituire il contenuto di dllmain.cpp con il codice riportato di seguito. Questo file definisce le funzioni di esportazione DLL. Queste funzioni usano la [Microsoft::WRL::Module](../windows/module-class.md) classe per gestire la class factory per il modulo.  
  
     [!code-cpp[wrl-classic-com-component#3](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_3.cpp)]  
  
7.  Aggiungere un **File di definizione moduli (def)** file al progetto. Nome del file, ad esempio, `CalculatorComponent.def`. Questo file fornisce al linker i nomi delle funzioni da esportare.  
  
8.  Aggiungere questo codice a CalculatorComponent.def:  
  
     [!CODE [wrl-classic-com-component#4](../CodeSnippet/VS_Snippets_Misc/wrl-classic-com-component#4)]  
  
9. Aggiungere runtimeobject.lib alla riga del linker. Per ulteriori informazioni, vedere [. File LIB come Input del Linker](../build/reference/dot-lib-files-as-linker-input.md).  
  
### <a name="to-consume-the-com-component-from-a-desktop-app"></a>Per utilizzare il componente COM da un'app desktop  
  
1.  Registrare il componente COM con il Registro di sistema di Windows. A tale scopo, creare un file con voci di registrazione, il nome `RegScript.reg`, e aggiungere il testo seguente. Sostituire *\< percorso dll >* con il percorso del file DLL, ad esempio, `C:\\temp\\WRLClassicCOM\\Debug\\CalculatorComponent.dll`.  
  
     [!CODE [wrl-classic-com-component#5](../CodeSnippet/VS_Snippets_Misc/wrl-classic-com-component#5)]  
  
2.  Eseguire RegScript.reg oppure aggiungerlo al progetto **evento post-compilazione**. Per ulteriori informazioni, vedere [pre-compilazione/Post-compilazione riga di comando dialogo eventi](../Topic/Pre-build%20Event-Post-build%20Event%20Command%20Line%20Dialog%20Box.md).  
  
3.  Aggiungere un **applicazione Console Win32** progetto alla soluzione. Denominare il progetto, ad esempio, `Calculator`.  
  
4.  Sostituire il contenuto di Calculator.cpp con il codice riportato di seguito:  
  
     [!code-cpp[wrl-classic-com-component#6](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_6.cpp)]  
  
## <a name="robust-programming"></a>Programmazione efficiente  
 In questo documento vengono usate funzioni COM standard per dimostrare che è possibile usare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per creare un componente COM e renderlo disponibile a qualsiasi tecnologia abilitata COM. È inoltre possibile utilizzare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] quali [Microsoft::WRL::ComPtr](../windows/comptr-class.md) nella tua applicazione desktop per gestire la durata di COM e altri oggetti. Il codice seguente usa [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per gestire la durata del puntatore `ICalculatorComponent`. La classe `CoInitializeWrapper` è un wrapper RAII che garantisce che la libreria COM venga liberata e che la sua durata sia superiore a quella dell'oggetto del puntatore intelligente `ComPtr`.  
  
 [!code-cpp[wrl-classic-com-component#7](../windows/codesnippet/CPP/how-to-create-a-classic-com-component-using-wrl_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria modelli C++ di Windows Runtime (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)