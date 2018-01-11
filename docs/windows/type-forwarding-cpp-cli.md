---
title: Inoltro del tipo (C + + CLI) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords: type forwarding, Visual C++
ms.assetid: ae730b69-0c27-41cc-84e1-3132783866ea
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6898c011a4e2e907cd745ccb206b0e0f0b37e78f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="type-forwarding-ccli"></a>Inoltro del tipo (C++/CLI)
*Inoltro del tipo* consente di spostare un tipo da un assembly (assembly a) in un altro assembly (assembly B), in modo che non è necessario ricompilare i client che usano l'assembly A.  
  
## <a name="all-platforms"></a>Tutte le piattaforme  
 Questa funzionalità non è supportata in tutti i Runtime.  
  
## <a name="windows-runtime"></a>Windows Runtime  
 Questa funzionalità non è supportata in Windows Runtime.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime  
 Esempio di codice seguente viene illustrato come utilizzare l'inoltro dei tipi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
#using "new.dll"  
[assembly:TypeForwardedTo(type::typeid)];  
```  
  
### <a name="parameters"></a>Parametri  
 `new`  
 L'assembly in cui si desidera spostare la definizione del tipo.  
  
 `type`  
 Il tipo di cui si desidera spostare in un altro assembly di definizione.  
  
### <a name="remarks"></a>Note  
 Dopo che un componente (assembly) viene fornito e viene utilizzata da applicazioni client, è possibile utilizzare i tipo di inoltro per spostare un tipo dal componente (assembly) in un altro assembly, inclusi i componenti aggiornati (e qualsiasi assembly aggiuntivi richiesti) e il client applicazioni continuerà a funzionare senza alcuna ricompilazione.  
  
 Inoltro dei tipi funziona solo per i componenti di cui viene fatto riferimenti dalle applicazioni esistenti. Quando si ricompila l'applicazione, è necessario i riferimenti agli assembly appropriati per qualsiasi tipo usato nell'applicazione.  
  
 Per l'inoltro di un tipo (A) da un assembly, è necessario aggiungere il `TypeForwardedTo` attributo per quel tipo, nonché un riferimento all'assembly. L'assembly cui viene fatto riferimento deve contenere uno dei valori seguenti:  
  
-   La definizione di tipo a  
  
-   Oggetto `TypeForwardedTo` attributo per un tipo, nonché un riferimento all'assembly.  
  
 Esempi di tipi che possono essere inoltrati:  
  
-   classi di riferimento  
  
-   classi di valore  
  
-   enum  
  
-   interfacce  
  
 Non è possibile inoltrare i tipi seguenti:  
  
-   Tipi generici  
  
-   Tipi nativi  
  
-   Tipi annidati (se si desidera inoltrare un tipo annidato, è necessario inoltrare il tipo di inclusione)  
  
 È possibile inoltrare un tipo a un assembly creato in qualsiasi linguaggio destinato a common language runtime.  
  
 Pertanto, se un file di codice sorgente utilizzato per compilare l'assembly DLL contiene una definizione di tipo (`ref class MyClass`), e si desidera spostare tale tipo di definizione assembly DLL, è necessario:  
  
1.  Spostare il `MyClass` definizione a un file di codice sorgente utilizzato per compilare una DLL del tipo.  
  
2.  Compilare l'assembly DLL  
  
3.  Eliminare il `MyClass` definizione del codice sorgente utilizzato per compilare una DLL e sostituirlo con il seguente tipo:  
  
    ```  
    #using "B.dll"  
    [assembly:TypeForwardedTo(MyClass::typeid)];  
    ```  
  
4.  Compilare l'assembly DLL.  
  
5.  Utilizzo di DLL senza ricompilare le applicazioni client.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**