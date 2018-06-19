---
title: "Procedura: creare direttamente un'istanza dei componenti WRL | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: 1a9fa011-0cee-4abf-bf83-49adf53ff906
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 127a8430e79e7963ea94646f70179df2f30450ff
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33878808"
---
# <a name="how-to-instantiate-wrl-components-directly"></a>Procedura: creare direttamente un'istanza dei componenti WRL
Informazioni su come utilizzare la libreria di modelli C++ (WRL) di Windows Runtime[Microsoft::WRL::Make](../windows/make-function.md) e [Microsoft::WRL::Details::MakeAndInitialize](../windows/makeandinitialize-function.md) funzioni per creare un'istanza di un componente dal modulo che lo definisce.  
  
 Creando componenti direttamente, è possibile ridurre il sovraccarico quando non è necessario class factory o altri meccanismi. È possibile creare un'istanza di un componente direttamente in entrambe le app Universal Windows Platform e nelle App desktop.  
  
Per informazioni su come utilizzare libreria modelli C++ per Windows Runtime per creare un componente COM classico e crearne un'istanza da un'app desktop esterna, vedere [procedura: creare un componente COM classico](../windows/how-to-create-a-classic-com-component-using-wrl.md).  
  
 Questo documento sono illustrati due esempi. Il primo esempio viene utilizzata la `Make` funzione per creare un'istanza di un componente. Il secondo esempio viene utilizzato il `MakeAndInitialize` funzione per creare un'istanza di un componente può avere esito negativo durante la costruzione. (Perché in genere utilizza COM `HRESULT` valori, invece delle eccezioni, per indicare gli errori, un tipo COM in genere non viene generata dal costruttore. `MakeAndInitialize` consente a un componente convalidare gli argomenti relativi costruzione di `RuntimeClassInitialize` metodo.) Entrambi gli esempi definiscono un'interfaccia di logger di base e implementano l'interfaccia definendo una classe che scrive i messaggi alla console.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare il `new` operatore per creare un'istanza di componenti Windows Runtime C++ Template Library. È pertanto consigliabile utilizzare sempre `Make` o `MakeAndInitialize` per creare direttamente un'istanza di un componente.  
  
### <a name="to-create-and-instantiate-a-basic-logger-component"></a>Per creare e creare un'istanza di un componente di logger di base  
  
1.  In Visual Studio, creare un **applicazione Console Win32** progetto. Nome del progetto, ad esempio `WRLLogger`.  
  
2.  Aggiungere un **Midl File (. idl)** file al progetto, denominare il file `ILogger.idl`e quindi aggiungere il codice:  
  
     [!code-cpp[wrl-logger-make#1](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_1.idl)]  
  
3.  Utilizzare il codice seguente per sostituire il contenuto di WRLLogger.cpp.  
  
     [!code-cpp[wrl-logger-make#2](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_2.cpp)]  
  
### <a name="to-handle-construction-failure-for-the-basic-logger-component"></a>Per gestire gli errori di costruzione per il componente di logger di base  
  
1.  Utilizzare il codice seguente per sostituire la definizione del `CConsoleWriter` classe. Questa versione contiene un membro privato stringa variabile ed esegue l'override di `RuntimeClass::RuntimeClassInitialize` metodo. `RuntimeClassInitialize` si verifica un errore se la chiamata a `SHStrDup` ha esito negativo.  
  
     [!code-cpp[wrl-logger-makeandinitialize#1](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_3.cpp)]  
  
2.  Utilizzare il codice seguente per sostituire la definizione di `wmain`. Utilizza questa versione `MakeAndInitialize` per creare un'istanza di `CConsoleWriter` oggetto e controlli la `HRESULT` risultato.  
  
     [!code-cpp[wrl-logger-makeandinitialize#2](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria modelli C++ per Windows Runtime (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)   
 [Microsoft::WRL::Make](../windows/make-function.md)   
 [Microsoft::WRL::Details::MakeAndInitialize](../windows/makeandinitialize-function.md)