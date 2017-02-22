---
title: "Modello di progetto di libreria di classi di WRL | Microsoft Docs"
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
ms.assetid: 628b0852-89e5-44f8-bf58-a09762bda15c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Modello di progetto di libreria di classi di WRL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si utilizza Visual Studio per scrivere un progetto [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] \([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]\), è possibile semplificare notevolmente l'attività scaricando il modello di progetto Libreria di classi di WRL.  
  
> [!NOTE]
>  Se è necessario aggiornare manualmente le impostazioni di progetto per un progetto esistente, vedere [DLLs \(C\+\+\/CX\)](http://msdn.microsoft.com/library/windows/apps/hh699881\(v=vs.110\).aspx).  
  
## Scaricare il modello WRL Project.  
 Visual Studio non fornisce un modello per i progetti [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)].  Di seguito viene illustrato come scaricare un modello di progetto che crea una libreria di classi base per le applicazioni Windows [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] con [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)].  
  
#### Per scaricare il Modello WRL Project.  
  
1.  Nella barra dei menu scegliere **File**, **Nuovo progetto**.  
  
2.  Nel riquadro sinistro della finestra di dialogo **Nuovo progetto**, **Online** quindi selezionare **Modelli**.  
  
3.  Nella casella **Cerca modelli online** nell'angolo in alto a destra, digitare `Libreria di classi WRL`.  Quando il modello viene visualizzato nei risultati della ricerca, scegliere il pulsante **OK**.  
  
4.  Nella finestra di dialogo **Scarica e installa**, se acconsentite ai termini licenza, scegliere il pulsante **Installa**.  
  
5.  Dopo che il modello si installa, creare un progetto scegliendo **File**, **Nuovo progetto** quindi selezionare il modello `WRLClassLibrary`.  Il progetto crea una DLL.  
  
## Esempi che utilizzano il modello di progetto  
 Leggere [Procedura dettagliata: creazione di un componente Windows Runtime di base](../windows/walkthrough-creating-a-basic-windows-runtime-component-using-wrl.md) per un esempio che utilizza questo modello per creare un componente [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
## Cosa offre il modello di progetto  
 Il modello di progetto fornisce:  
  
-   un file .idl che dichiara gli attributi MIDL per un'interfaccia di base l'implementazione della classe.  Di seguito è riportato un esempio.  
  
     [!code-cpp[wrl-project-template#1](../windows/codesnippet/CPP/wrl-class-library-project-template_1.idl)]  
  
-   un file .cpp che definisce l'implementazione della classe.  Di seguito è riportato un esempio.  
  
     [!code-cpp[wrl-project-template#2](../windows/codesnippet/CPP/wrl-class-library-project-template_2.cpp)]  
  
     La classe basse [RuntimeClass](../windows/runtimeclass-class.md) aiuta a gestire il riferimento globale di tutti gli oggetti nel modulo e dichiara i metodi delle interfacce [IInspectable](http://msdn.microsoft.com/it-it/0657e51f-d4c0-46c6-927d-b01e54b6846c) e [IUnknown](http://msdn.microsoft.com/it-it/33f1d79a-33fc-4ce5-a372-e08bda378332).  La macro [InspectableClass](../windows/inspectableclass-macro.md) implementa `IUnknown` e `IInspectable`.  La macro [ActivatableClass](../windows/activatableclass-macros.md) crea una class factory che crea istanze della classe.  
  
-   un file denominato module.cpp che definisce le esportazioni `DllMain`, `DllCanUnloadNow`, `DllGetActivationFactory` e `DllGetClassObject`della libreria.  
  
## Vedere anche  
 [Libreria di modelli di Windows Runtime C\+\+ \(WRL\)](../windows/windows-runtime-cpp-template-library-wrl.md)