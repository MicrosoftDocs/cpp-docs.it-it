---
title: Modello di progetto libreria di classi WRL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
ms.assetid: 628b0852-89e5-44f8-bf58-a09762bda15c
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ea8f4609be920c03ff718ab79ba5a3693ec7d8e5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="wrl-class-library-project-template"></a>Modello di progetto di libreria di classi di WRL
Se si utilizza Visual Studio per scrivere un progetto libreria di modelli C++ (WRL) di Windows Runtime, è possibile semplificare notevolmente l'attività, scaricare il modello di progetto libreria di classi WRL.  
  
> [!NOTE]
>  Se è necessario aggiornare manualmente le impostazioni di progetto per un progetto esistente, vedere [DLL (C + + CX)](http://msdn.microsoft.com/library/windows/apps/hh699881\(v=vs.110\).aspx).  
  
## <a name="download-the-wrl-project-template"></a>Scaricare il modello di progetto WRL  
 Visual Studio non fornisce un modello per i progetti libreria di modelli di Windows Runtime C++. Di seguito viene illustrato come scaricare un modello di progetto che crea una libreria di classi di base per le app Universal Windows Platform con libreria di modelli di Windows Runtime C++.  
  
#### <a name="to-download-the-wrl-project-template"></a>Per scaricare il modello di progetto WRL  
  
1.  Nella barra dei menu, scegliere **File**, **nuovo progetto**.  
  
2.  Nel riquadro sinistro della finestra di **nuovo progetto** nella finestra di dialogo **Online**e quindi selezionare **modelli**.  
  
3.  Nel **cercare online modelli** casella nell'angolo superiore destro, tipo `WRL Class Library`. Quando il modello viene visualizzato nei risultati della ricerca, scegliere il **OK** pulsante.  
  
4.  Nel **scaricare e installare** nella finestra di dialogo per la gestione delle licenze accettare le condizioni, scegliere il **installare** pulsante.  
  
5.  Dopo aver installato il modello, creare un progetto scegliendo **File**, **nuovo progetto**e quindi selezionando il `WRLClassLibrary` modello. Il progetto crea una DLL.  
  
## <a name="examples-that-use-the-project-template"></a>Esempi che utilizzano il modello di progetto  
 Lettura [procedura dettagliata: creazione di un componente Windows Runtime base](../windows/walkthrough-creating-a-basic-windows-runtime-component-using-wrl.md) per un esempio che utilizza questo modello per creare un componente Windows Runtime.  
  
## <a name="what-the-project-template-provides"></a>Cosa offre il modello di progetto  
 Il modello di progetto offre:  
  
-   file .idl che dichiara gli attributi MIDL per un'interfaccia di base dell'implementazione della classe. Di seguito è riportato un esempio.  
  
     [!code-cpp[wrl-project-template#1](../windows/codesnippet/CPP/wrl-class-library-project-template_1.idl)]  
  
-   file .cpp che definisce l'implementazione della classe. Di seguito è riportato un esempio.  
  
     [!code-cpp[wrl-project-template#2](../windows/codesnippet/CPP/wrl-class-library-project-template_2.cpp)]  
  
     Il [RuntimeClass](../windows/runtimeclass-class.md) classe di base consente di gestire il riferimento globale di tutti gli oggetti nel modulo e dichiara i metodi del [IUnknown](http://msdn.microsoft.com/en-us/33f1d79a-33fc-4ce5-a372-e08bda378332) e [IInspectable](http://msdn.microsoft.com/en-us/0657e51f-d4c0-46c6-927d-b01e54b6846c) interfacce. Il [InspectableClass](../windows/inspectableclass-macro.md) macro implementa `IUnknown` e `IInspectable`. Il [ActivatableClass](../windows/activatableclass-macros.md) (macro) Crea una class factory che crea istanze della classe.  
  
-   file denominato module.cpp che definisce le esportazioni `DllMain`, `DllCanUnloadNow`, `DllGetActivationFactory` e `DllGetClassObject`della libreria.  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di modelli di Windows Runtime C++ (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)