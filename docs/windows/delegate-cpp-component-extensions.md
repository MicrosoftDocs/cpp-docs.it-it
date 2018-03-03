---
title: delegato (estensioni del componente C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- delegate_cpp
- delegate
dev_langs:
- C++
helpviewer_keywords:
- delegate keyword [C++]
ms.assetid: 03caf23d-7873-4a23-9b34-becf42aaf429
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 30fd64fd37fb30c34b5d4f5901f16143fb1cd701
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="delegate--c-component-extensions"></a>delegato (Estensioni del componente C++)
Dichiara un tipo che rappresenta un puntatore a funzione.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 Windows Runtime e common language runtime supporta i delegati.  
  
### <a name="remarks"></a>Note  
 `delegate` è una parola chiave sensibile al contesto. Per ulteriori informazioni, vedere [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).  
  
 Per rilevare in fase di compilazione se un tipo è un delegato, utilizzare il `__is_delegate()` tratto di tipo. Per ulteriori informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
## <a name="windows-runtime"></a>Windows Runtime  
 C + + CX supporta i delegati con la sintassi seguente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
access  
delegate  
return-type  
delegate-type-identifier  
(  
[ parameters ]  
)  
  
```  
  
### <a name="parameters"></a>Parametri  
 *access*  
 (facoltativo) L'accessibilità del delegato, che può essere `public` (impostazione predefinita) o `private`. Il prototipo di funzione può inoltre essere qualificato con il `const` o `volatile` parole chiave.  
  
 *tipo restituito*  
 Il tipo restituito del prototipo di funzione.  
  
 *Identificatore di tipo delegato*  
 Il nome del tipo delegato dichiarata.  
  
 *parametri*  
 (Facoltativo) I tipi e gli identificatori del prototipo di funzione.  
  
### <a name="remarks"></a>Note  
 Utilizzare il *identificatore di tipo delegato* per dichiarare un evento con lo stesso prototipo del delegato. Per ulteriori informazioni, vedere [delegati (C + + CX)](../cppcx/delegates-c-cx.md).  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime  
 Common language runtime supporta i delegati con la sintassi seguente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
access  
delegate  
function_declaration  
  
```  
  
### <a name="parameters"></a>Parametri  
 *access*  
 (facoltativo) L'accessibilità del delegato all'esterno dell'assembly può essere pubblico o privato.  Il valore predefinito è privato.  All'interno di una classe, un delegato può avere qualsiasi tipo di accessibilità.  
  
 *function_declaration*  
 La firma della funzione che può essere associata al delegato. Il tipo restituito di un delegato può essere qualsiasi tipo gestito. Per motivi di interoperabilità, è consigliabile che il tipo restituito di un delegato sia un tipo a CLS.  
  
 Per definire un delegato non associato, il primo parametro *function_declaration* deve essere il tipo del `this` puntatore per l'oggetto. 
  
### <a name="remarks"></a>Note  
 I delegati sono multicast: il "puntatore a funzione" può essere associato a uno o più metodi all'interno di una classe gestita. Il **delegato** (parola chiave) definisce un tipo di delegato multicast con una firma di metodo specifico.  
  
 Un delegato può inoltre essere associato a un metodo di una classe di valore, ad esempio un metodo statico.  
  
 Un delegato presenta le caratteristiche seguenti:  
  
-   Eredita da **System:: MulticastDelegate**.  
  
-   Ha un costruttore che accetta due argomenti: un puntatore a una classe gestita o **NULL** (nel caso di associazione a un metodo statico) e un metodo completamente qualificato del tipo specificato.  
  
-   Ha un metodo denominato `Invoke`, la cui firma corrisponde alla firma del delegato dichiarata.  
  
 Quando un delegato viene richiamato, la funzione o funzioni vengono chiamati in ordine in cui sono stati collegati.  
  
 Il valore restituito di un delegato è il valore restituito dal relativo ultima funzione membro associato.  
  
 Delegati non possono essere sottoposti a overload.  
  
 Delegati possono essere associati o non associati.  
  
 Quando si crea un'istanza di un delegato associato, il primo argomento deve essere un riferimento all'oggetto.  Il secondo argomento della creazione di un'istanza di delegato deve essere di essere l'indirizzo di un metodo di un oggetto di classe gestita o un puntatore a un metodo di un tipo di valore.   Il secondo argomento della creazione di un'istanza di delegato deve assegnare un nome di metodo con la sintassi di ambito di classe completo e applicare l'operatore address-of.  
  
 Quando si crea un'istanza di un delegato non associato, il primo argomento deve essere l'indirizzo di un metodo di un oggetto di classe gestita o un puntatore a un metodo di un tipo valore.   L'argomento deve assegnare un nome di metodo con la sintassi di ambito di classe completo e applicare l'operatore address-of.  
  
 Quando si crea un delegato a una funzione globale o statica, è necessario un solo parametro: la funzione (facoltativamente, l'indirizzo della funzione).  
  
 Per ulteriori informazioni sui delegati, vedere  
  
-   [Procedura: Definire e usare delegati (C++/CLI)](../dotnet/how-to-define-and-use-delegates-cpp-cli.md)  
  
-   [Delegati generici (Visual C++)](../windows/generic-delegates-visual-cpp.md)  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 Nell'esempio seguente viene illustrato come dichiarare e inizializzare richiamare delegati.  
  
```cpp  
// mcppv2_delegate.cpp  
// compile with: /clr  
using namespace System;  
  
// declare a delegate  
public delegate void MyDel(int i);  
  
ref class A {  
public:  
   void func1(int i) {  
      Console::WriteLine("in func1 {0}", i);  
   }  
  
   void func2(int i) {  
      Console::WriteLine("in func2 {0}", i);  
   }  
  
   static void func3(int i) {  
      Console::WriteLine("in static func3 {0}", i);  
   }  
};  
  
int main () {  
   A ^ a = gcnew A;  
  
   // declare a delegate instance  
   MyDel^ DelInst;  
  
   // test if delegate is initialized  
   if (DelInst)  
      DelInst(7);  
  
   // assigning to delegate  
   DelInst = gcnew MyDel(a, &A::func1);  
  
   // invoke delegate  
   if (DelInst)  
      DelInst(8);  
  
   // add a function  
   DelInst += gcnew MyDel(a, &A::func2);  
  
   DelInst(9);  
  
   // remove a function  
   DelInst -= gcnew MyDel(a, &A::func1);  
  
   // invoke delegate with Invoke  
   DelInst->Invoke(10);  
  
   // make delegate to static function  
   MyDel ^ StaticDelInst = gcnew MyDel(&A::func3);  
   StaticDelInst(11);  
}  
```  
  
 **Output**  
  
```Output  
in func1 8  
  
in func1 9  
  
in func2 9  
  
in func2 10  
  
in static func3 11  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)