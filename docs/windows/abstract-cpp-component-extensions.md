---
title: abstract (estensioni del componente C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- abstract
- abstract_cpp
dev_langs:
- C++
helpviewer_keywords:
- abstract keyword [C++]
ms.assetid: cbae3408-0378-4ac8-b70d-c016b381a6d5
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7b935aabeb048d955941a41f6a50735897a53009
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="abstract--c-component-extensions"></a>abstract (Estensioni del componente C++)
La parola chiave `abstract` dichiara:  
  
-   Che un tipo può essere usato come tipo di base, ma non è possibile creare un'istanza del tipo stesso.  
  
-   Che una funzione membro di tipo può essere definita solo in un tipo derivato.  
  
## <a name="all-platforms"></a>Tutte le piattaforme  
 **Sintassi**  
  
```  
  
      class-declaration  
      class-identifier  
      abstract {}  
virtualreturn-typemember-function-identifier() abstract ;  
  
```  
  
 **Note**  
  
 La sintassi del primo esempio dichiara una classe astratta. Il *dichiarazione di classe* componente può essere una dichiarazione C++ nativa (`class` o `struct`), o una dichiarazione di estensione C++ (`ref class` o `ref struct`) se il **/ZW** o **/clr** è specificata l'opzione del compilatore.  
  
 La sintassi del secondo esempio dichiara una funzione membro virtuale astratta. Dichiarare che una funzione astratta equivale a dichiararla come funzione virtuale pura. Dichiarare una funzione membro astratta comporta che la classe contenitore venga dichiarata astratta.  
  
 Il `abstract` (parola chiave) è supportato in codice nativo e specifico della piattaforma; ovvero, può essere compilato con o senza il **/ZW** o **/clr** l'opzione del compilatore.  
  
 È possibile rilevare in fase di compilazione se un tipo è astratto con il `__is_abstract(type)` tratto di tipo. Per ulteriori informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
 La parola chiave `abstract` è un identificatore di override sensibile al contesto. Per ulteriori informazioni sulle parole chiave sensibili al contesto, vedere [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md). Per ulteriori informazioni sugli identificatori di override, vedere [procedura: dichiarare gli identificatori di Override nelle compilazioni Native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).  
  
## <a name="windows-runtime"></a>Windows Runtime  
 Per ulteriori informazioni, vedere [le classi e struct](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx).  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 L'esempio di codice seguente genera un errore perché la classe `X` è contrassegnata come `abstract`.  
  
```  
// abstract_keyword.cpp  
// compile with: /clr  
ref class X abstract {  
public:  
   virtual void f() {}  
};  
  
int main() {  
   X ^ MyX = gcnew X;   // C3622  
}  
```  
  
 **Esempio**  
  
 L'esempio di codice seguente genera un errore perché crea un'istanza di una classe nativa contrassegnata come `abstract`. Questo errore si verifica con o senza il **/clr** l'opzione del compilatore.  
  
```  
// abstract_keyword_2.cpp  
class X abstract {  
public:  
   virtual void f() {}  
};  
  
int main() {  
   X * MyX = new X; // C3622: 'X': a class declared as 'abstract'  
                    // cannot be instantiated. See declaration of 'X'}  
  
```  
  
 **Esempio**  
  
 L'esempio di codice seguente genera un errore perché la funzione `f` include una definizione, ma è contrassegnata come `abstract`. L'istruzione finale nell'esempio illustra che dichiarare una funzione virtuale astratta equivale a dichiarare una funzione virtuale pura.  
  
```  
// abstract_keyword_3.cpp  
// compile with: /clr  
ref class X {  
public:  
   virtual void f() abstract {}   // C3634  
   virtual void g() = 0 {}   // C3634  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)