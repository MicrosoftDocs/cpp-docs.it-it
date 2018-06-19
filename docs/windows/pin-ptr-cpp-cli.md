---
title: pin_ptr (C + + CLI) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- pin_ptr_cpp
- stdcli::language::pin_ptr
- pin_ptr
dev_langs:
- C++
helpviewer_keywords:
- pinning pointers
- pin_ptr keyword [C++]
ms.assetid: 6c2e6c73-4ec2-4dce-8e1f-ccf3a9f9d0aa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: afc99a352e0bde7918cab460293ff23061377551
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33880166"
---
# <a name="pinptr-ccli"></a>pin_ptr (C++/CLI)
Dichiara un *puntatore di blocco*, che viene utilizzata solo con common language runtime.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.  
  
## <a name="windows-runtime"></a>Windows Runtime  
 (Questa funzionalità del linguaggio non supportata in Windows Runtime).  
  
## <a name="common-language-runtime"></a>Common Language Runtime  
 Oggetto *puntatore di blocco* è un puntatore interno che impedisce l'oggetto a cui punta venga spostato nell'heap sottoposto a garbage collection. Ovvero, il valore di un puntatore di blocco non viene modificato da common language runtime. Ciò è necessario quando si passa l'indirizzo di una classe gestita a una funzione non gestita in modo che l'indirizzo non cambierà in modo imprevisto durante la risoluzione della chiamata di funzione non gestita.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
[cli::]pin_ptr<cv_qualifiertype>var = &initializer;  
```  
  
### <a name="parameters"></a>Parametri  
 *cv_qualifier*  
 `const` o `volatile` qualificatori. Per impostazione predefinita, è un puntatore di blocco `volatile`. È ridondante ma non un errore per dichiarare un puntatore di blocco `volatile`.  
  
 *type*  
 Tipo di `initializer`.  
  
 *var*  
 Nome della variabile `pin_ptr`.  
  
 *initializer*  
 Membro di un tipo di riferimento, elemento di una matrice gestita o qualsiasi altro oggetto che è possibile assegnare a un puntatore nativo.  
  
### <a name="remarks"></a>Note  
 Oggetto `pin_ptr` rappresenta un superset della funzionalità di un puntatore nativo. Pertanto, qualsiasi elemento che può essere assegnato a un puntatore nativo può anche essere assegnato a un `pin_ptr`. In un puntatore interno può essere eseguito lo stesso set di operazioni dei puntatori nativi, inclusi il confronto e l'aritmetica dei puntatori.  
  
 Un oggetto o un oggetto secondario di una classe gestita può essere bloccata, nel qual caso common language runtime non verrà spostata durante l'operazione di garbage collection. L'utilizzo principale di questo consiste nel passare un puntatore a dati gestiti come parametro effettivo di una chiamata di funzione non gestita. Durante un ciclo di raccolta, il runtime esamina i metadati creati per il puntatore di blocco e non può essere spostata l'elemento a che cui punta.  
  
 Aggiunta di un oggetto aggiunge anche i campi di valore; ovvero, i campi della primitiva o valore type. Tuttavia, i campi dichiarati dall'handle di rilevamento (`%`) non sono stati bloccati.  
  
 Aggiunta di un oggetto secondario definito in un oggetto gestito ha l'effetto di blocco dell'intero oggetto.  
  
 Se il puntatore di blocco viene riassegnato per puntare a un nuovo valore, l'istanza precedente a cui puntata non è più considerato bloccato.  
  
 Un oggetto viene aggiunto solo durante un `pin_ptr` fa riferimento ad esso. L'oggetto non è più bloccato quando il puntatore di blocco diventa esterno all'ambito o è impostato su [nullptr](../windows/nullptr-cpp-component-extensions.md). Dopo il `pin_ptr` esce dall'ambito, l'oggetto che è stato aggiunto possono essere spostate nell'heap di garbage collection. Eventuali puntatori nativi che ancora puntano all'oggetto non verranno aggiornati e deallocare che fanno riferimento a uno di essi potrebbero generare un'eccezione irreversibile.  
  
 Se i puntatori di blocco non puntano all'oggetto (tutti i puntatori di blocco fuori dall'ambito, sono stati assegnati in modo da puntare ad altri oggetti o sono stati assegnati [nullptr](../windows/nullptr-cpp-component-extensions.md)), l'oggetto è garantito che non venga bloccata.  
  
 Un puntatore di blocco può puntare a un handle di riferimento, tipo di valore o handle di tipo boxed, membro di un tipo gestito o un elemento di una matrice gestita. Non può fare riferimento a un tipo riferimento.  
  
 Accettare l'indirizzo di un `pin_ptr` che punta a un oggetto nativo provoca un comportamento indefinito.  
  
 Puntatori di blocco possono essere dichiarati solo come variabili locali statiche nello stack.  
  
 Puntatori di blocco non possono essere utilizzati come:  
  
-   funzione (parametri)  
  
-   il tipo restituito di una funzione  
  
-   un membro di una classe  
  
-   il tipo di destinazione di un cast.  
  
 `pin_ptr` nel `cli` dello spazio dei nomi. Per ulteriori informazioni, vedere [Platform, default e cli spazi dei nomi](../windows/platform-default-and-cli-namespaces-cpp-component-extensions.md).  
  
 Per ulteriori informazioni sui puntatori interni, vedere [interior_ptr (C + + CLI)](../windows/interior-ptr-cpp-cli.md).  
  
 Per ulteriori informazioni sui puntatori di blocco, vedere [come: Pin puntatori e matrici](../windows/how-to-pin-pointers-and-arrays.md) e [procedura: dichiarare puntatori di blocco e i tipi di valore](../windows/how-to-declare-pinning-pointers-and-value-types.md).  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 L'esempio seguente usa `pin_ptr` per vincolare la posizione del primo elemento della matrice.  
  
```  
// pin_ptr_1.cpp  
// compile with: /clr   
using namespace System;  
#define SIZE 10  
  
#pragma unmanaged  
// native function that initializes an array  
void native_function(int* p) {  
   for(int i = 0 ; i < 10 ; i++)  
    p[i] = i;  
}  
#pragma managed  
  
public ref class A {  
private:  
   array<int>^ arr;   // CLR integer array  
  
public:  
   A() {  
      arr = gcnew array<int>(SIZE);  
   }  
  
   void load() {  
   pin_ptr<int> p = &arr[0];   // pin pointer to first element in arr  
   int* np = p;   // pointer to the first element in arr  
   native_function(np);   // pass pointer to native function  
   }  
  
   int sum() {  
      int total = 0;  
      for (int i = 0 ; i < SIZE ; i++)  
         total += arr[i];  
      return total;  
   }  
};  
  
int main() {  
   A^ a = gcnew A;  
   a->load();   // initialize managed array using the native function  
   Console::WriteLine(a->sum());  
}  
```  
  
 **Output**  
  
```Output  
45  
```  
  
 **Esempio**  
  
 Nell'esempio seguente viene illustrato che un puntatore interno può essere convertito in un puntatore di blocco e il tipo restituito dell'operatore address-of (`&`) è un puntatore interno quando l'operando è nell'heap gestito.  
  
```  
// pin_ptr_2.cpp  
// compile with: /clr  
using namespace System;  
  
ref struct G {  
   G() : i(1) {}  
   int i;  
};  
  
ref struct H {  
   H() : j(2) {}  
   int j;  
};  
  
int main() {  
   G ^ g = gcnew G;   // g is a whole reference object pointer  
   H ^ h = gcnew H;  
  
   interior_ptr<int> l = &(g->i);   // l is interior pointer  
  
   pin_ptr<int> k = &(h->j);   // k is a pinning interior pointer  
  
   k = l;   // ok  
   Console::WriteLine(*k);  
};  
```  
  
 **Output**  
  
```Output  
1  
```  
  
 **Esempio**  
  
 Nell'esempio seguente viene illustrato che è possibile eseguire il cast di un puntatore a un altro tipo.  
  
```  
// pin_ptr_3.cpp  
// compile with: /clr  
using namespace System;  
  
ref class ManagedType {  
public:  
   int i;  
};  
  
int main() {  
   ManagedType ^mt = gcnew ManagedType;  
   pin_ptr<int> pt = &mt->i;  
   *pt = 8;  
   Console::WriteLine(mt->i);  
  
   char *pc = ( char* ) pt;  
   *pc = 255;  
   Console::WriteLine(mt->i);  
}  
```  
  
 **Output**  
  
```Output  
8  
255  
```