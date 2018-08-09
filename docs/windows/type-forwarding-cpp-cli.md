---
title: Inoltro del tipo (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- type forwarding, Visual C++
ms.assetid: ae730b69-0c27-41cc-84e1-3132783866ea
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 627b0a881795a963e3739accc351ee684b7b8232
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39644934"
---
# <a name="type-forwarding-ccli"></a>Inoltro del tipo (C++/CLI)
*Inoltro del tipo* consente di spostare un tipo da un assembly (assembly A) in un altro assembly (assembly B), in modo che non è necessario ricompilare i client che usano assembly A.  
  
## <a name="all-platforms"></a>Tutte le piattaforme  
 Questa funzionalità non è supportata in tutti i Runtime.  
  
## <a name="windows-runtime"></a>Windows Runtime  
 Questa funzionalità non è supportata in Windows Runtime.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: `/ZW`  
  
## <a name="common-language-runtime"></a>Common Language Runtime  
 Esempio di codice seguente viene illustrato come usare l'inoltro dei tipi.  
  
### <a name="syntax"></a>Sintassi  
  
```  
#using "new.dll"  
[assembly:TypeForwardedTo(type::typeid)];  
```  
  
### <a name="parameters"></a>Parametri  
 *new*  
 L'assembly in cui si sta spostando la definizione del tipo.  
  
 *type*  
 Il tipo la cui definizione si spostano in un altro assembly.  
  
### <a name="remarks"></a>Note  
 Dopo che un componente (assembly) viene fornito ed è usato da applicazioni client, è possibile usare l'inoltro per lo spostamento di un tipo in un altro assembly dal componente (assembly), sono inclusi i componenti aggiornati (e qualsiasi assembly aggiuntivi richiesti) di tipo e il client le applicazioni continuerà a funzionare senza alcuna ricompilazione.  
  
 L'inoltro dei tipi funziona solo per i componenti di cui viene fatto riferimenti dalle applicazioni esistenti. Quando si ricompila un'applicazione, deve esistere i riferimenti all'assembly appropriato per tutti i tipi usati nell'applicazione.  
  
 Per l'inoltro di un tipo (A) da un assembly, è necessario aggiungere il `TypeForwardedTo` attributo per quel tipo, nonché un riferimento all'assembly. L'assembly cui viene fatto riferimento deve contenere uno dei seguenti:  
  
-   La definizione di tipo a.  
  
-   Oggetto `TypeForwardedTo` attributo per un tipo, nonché un riferimento all'assembly.  
  
 Esempi di tipi che possono essere inoltrati:  
  
-   classi di riferimento  
  
-   classi di valore  
  
-   enum  
  
-   interfacce  
  
 Non è possibile inoltrare i tipi seguenti:  
  
-   Tipi generici  
  
-   Tipi nativi  
  
-   I tipi annidati (se si desidera inoltrare un tipo annidato, è necessario inoltrare il tipo di inclusione)  
  
 È possibile inoltrare un tipo a un assembly creato in qualsiasi linguaggio destinato common language runtime.  
  
 Pertanto, se un file di codice sorgente utilizzato per compilare assembly DLL contiene una definizione di tipo (`ref class MyClass`), e si vogliono spostare tale tipo definizione all'assembly b. dll, sarebbe:  
  
1.  Spostare il `MyClass` definizione a un file di codice sorgente utilizzato per compilare una DLL del tipo.  
  
2.  Compilare l'assembly b. dll  
  
3.  Eliminare il `MyClass` digitare definizione dal codice sorgente utilizzato per creare DLL e sostituirlo con quanto segue:  
  
    ```  
    #using "B.dll"  
    [assembly:TypeForwardedTo(MyClass::typeid)];  
    ```  
  
4.  Compilare l'assembly DLL.  
  
5.  Usare DLL senza ricompilare le applicazioni client.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: `/clr`