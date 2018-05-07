---
title: Spazi dei nomi e visibilità del tipo (C + + CX) | Documenti Microsoft
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: language-reference
ms.assetid: cbc01a3a-3b69-4ded-9c42-ecbf0fd0a00e
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 07b48d0464dfc36f671f6566ce45894aca76cbc4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="namespaces-and-type-visibility-ccx-"></a>Spazi dei nomi e visibilità del tipo (C++/CX)
Uno spazio dei nomi è un costrutto C++ standard per il raggruppamento di tipi con funzionalità correlate e per la prevenzione dei conflitti di denominazione nelle librerie. Il sistema di tipi Windows Runtime richiede che tutti i tipi pubblici di Windows Runtime, inclusi quelli nel codice, devono essere dichiarati in uno spazio dei nomi nell'ambito dello spazio dei nomi. I tipi pubblici dichiarati in ambito globale o annidati in un'altra classe generano un errore in fase di compilazione.  
  
 Un file .winmd deve avere lo stesso nome dello spazio dei nomi radice. Ad esempio, è possibile creare un'istanza di una classe denominata A.B.C.MyClass solo se è definita in un file di metadati denominato A.winmd o A.B.winmd o A.B.C.winmd. Il nome dell'eseguibile non deve necessariamente corrispondere al nome del file con estensione winmd.  
  
## <a name="type-visibility"></a>Visibilità dei tipi  
 In uno spazio dei nomi, tipi di Windows Runtime, a differenza dei tipi C++ standard, avere accessibilità privata o pubblica. Per impostazione predefinita, l'accessibilità è privata. Solo un tipo pubblico è visibile ai metadati e quindi utilizzabile da parte di app e componenti che possono essere scritti in linguaggi diversi da C++. Le regole per i tipi visibili sono in genere più restrittive rispetto alle regole per i tipi non visibili perché i tipi visibili non possono esporre concetti specifici di C++ non supportati nei linguaggi .NET o in JavaScript.  
  
> [!NOTE]
>  I metadati sono utilizzati solo in fase di esecuzione dai linguaggi .NET e da JavaScript. Quando un componente o un'app C++ comunica con un altro componente o un'altra app C++, inclusi i componenti Windows, che vengono scritti sempre in C++, non è richiesto l'utilizzo dei metadati in fase di esecuzione.  
  
## <a name="member-accessibility-and-visibility"></a>Accessibilità e visibilità dei membri  
 In un delegato, un'interfaccia o una classe di riferimento privata, nessun membro viene emesso nei metadati, anche se dispone di accessibilità pubblica. Nelle classi pubbliche di riferimento, è possibile controllare la visibilità dei membri nei metadati indipendentemente dall'accessibilità nel codice sorgente. Come in C++ standard, applica il principio dei privilegi minimi; non rendere visibili i membri nei metadati a meno che non sia assolutamente necessario.  
  
 Utilizza i modificatori di accesso riportati di seguito per controllare sia la visibilità dei metadati che l'accessibilità del codice sorgente.  
  
||||  
|-|-|-|  
|Modificatore|Significato|Emesso nei metadati?|  
|private|L'accessibilità predefinita. Lo stesso significato di C++ standard.|No|  
|protected|Lo stesso significato di C++ standard, sia nell'app o nel componente che nei metadati.|Sì|  
|public|Lo stesso significato di C++ standard.|Yes|  
|`public protected` - oppure - `protected public`|Accessibilità protetta nei metadati, pubblica nell'app o nel componente.|Yes|  
|`protected private` o `private protected`|Non visibile nei metadati; accessibilità protetta nell'app o nel componente.||  
|`internal` o `private public`|Il membro è pubblico nell'app o nel componente, ma non è visibile nei metadati.|No|  
  
## <a name="windows-runtime-namespaces"></a>Spazi dei nomi Windows Runtime  
 L'API di Windows è costituita da tipi dichiarati in Windows::\* gli spazi dei nomi. Questi spazi dei nomi sono riservati a Windows e non è possibile aggiungere ad essi altri tipi. Il **Visualizzatore oggetti**ti consente di visualizzare questi spazi dei nomi nel file windows.winmd. Per la documentazione sugli spazi dei nomi, vedere l'articolo sulle [API di Windows](http://msdn.microsoft.com/library/windows/apps/br211377).  
  
## <a name="ccx-namespaces"></a>spazi dei nomi C++/CX  
 C + + CX definiscono determinati tipi in questi spazi dei nomi come parte della proiezione del sistema di tipi Windows Runtime.  
  
|||  
|-|-|  
|**Spazio dei nomi**|**Descrizione**|  
|default|Contiene i tipi numerici e char16 incorporati. Questi tipi sono inclusi nell'ambito di ogni spazio dei nomi e non è mai richiesto l'utilizzo dell'istruzione `using` .|  
|Piattaforma|Contiene tipi principalmente pubblici che corrispondono ai tipi di Windows Runtime, ad esempio `Array<T>`, `String`, `Guid`, e `Boolean`. Include inoltre i tipi di supporto specifici quali `Platform::Agile<T>` e `Platform::Box<T>`.|  
|Platform::Collections|Contiene classi collection concrete che implementano le interfacce di raccolta di Windows Runtime `IVector`, `IMap`e così via. Questi tipi sono definiti nel file di intestazione collection.h, non in platform.winmd.|  
|Platform::Details|Contiene i tipi utilizzati dal compilatore e che non sono per uso pubblico.|  
  
## <a name="see-also"></a>Vedere anche  
 [Sistema di tipi (C++/CX)](../cppcx/type-system-c-cx.md)