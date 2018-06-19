---
title: sealed (estensioni del componente C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- sealed_cpp
- sealed
dev_langs:
- C++
helpviewer_keywords:
- sealed keyword [C++]
ms.assetid: 3d0d688a-41aa-45f5-a25a-65c44206521e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 05c75aef047e914086aaf4ae2c0d0d3bdd04e8c7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890863"
---
# <a name="sealed--c-component-extensions"></a>sealed (Estensioni del componente C++)
`sealed` è una parola chiave sensibile al contesto per le classi di riferimento che indica che un membro virtuale non può essere sottoposto a override o che un tipo non può essere usato come tipo di base.  
  
> [!NOTE]
>  ISO C++ 11 Standard lingua ha il [finale](../cpp/final-specifier.md) (parola chiave), che è supportato in Visual Studio. È possibile usare `final` sulle classi standard e `sealed` sulle classi di riferimento.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
  
## <a name="syntax"></a>Sintassi
  
```  
ref class identifier sealed {...};  
virtual return-type identifier() sealed {...};  
```  
  
### <a name="parameters"></a>Parametri  
  
 *identifier*  
 Nome della funzione o della classe.  
  
 *Tipo restituito*  
 Tipo restituito da una funzione.  
  
## <a name="remarks"></a>Note  
  
 Nel primo esempio di sintassi, la classe è sealed. Nel secondo esempio una funzione virtuale è sealed.  
  
 Il `sealed` parola chiave è valida per le piattaforme native e anche per Windows Runtime e common language runtime (CLR). Per ulteriori informazioni, vedere [gli identificatori di Override e compilazioni Native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).  
  
 È possibile rilevare in fase di compilazione se un tipo è sealed usando il `__is_sealed(type)` tratto di tipo. Per ulteriori informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
 `sealed` è una parola chiave sensibile al contesto.  Per ulteriori informazioni, vedere [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).  
  
## <a name="windows-runtime"></a>Windows Runtime  
 Vedere [le classi e struct](http://msdn.microsoft.com/library/windows/apps/hh699870.aspx).  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime  
 Non esistono note per questa funzionalità del linguaggio che si applichino solo a Common Language Runtime.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 L'esempio di codice seguente illustra l'effetto di `sealed` su un membro virtuale.  
  
```cpp  
// sealed_keyword.cpp  
// compile with: /clr  
interface struct I1 {  
   virtual void f();  
   virtual void g();  
};  
  
ref class X : I1 {  
public:  
   virtual void f() {  
      System::Console::WriteLine("X::f override of I1::f");  
   }  
  
   virtual void g() sealed {  
      System::Console::WriteLine("X::f override of I1::g");  
   }  
};  
  
ref class Y : public X {  
public:  
   virtual void f() override {  
      System::Console::WriteLine("Y::f override of I1::f");  
   }  
  
   /*  
   // the following override generates a compiler error  
   virtual void g() override {  
      System::Console::WriteLine("Y::g override of I1::g");  
   }    
   */  
};  
  
int main() {  
   I1 ^ MyI = gcnew X;  
   MyI -> f();  
   MyI -> g();  
  
   I1 ^ MyI2 = gcnew Y;  
   MyI2 -> f();  
}  
```  
  
```Output  
X::f override of I1::f  
X::f override of I1::g  
Y::f override of I1::f  
```  
  
 L'esempio di codice successivo mostra come contrassegnare una classe come sealed.  
  
```cpp  
// sealed_keyword_2.cpp  
// compile with: /clr  
interface struct I1 {  
   virtual void f();  
};  
  
ref class X sealed : I1 {  
public:  
   virtual void f() override {}  
};  
  
ref class Y : public X {   // C3246 base class X is sealed  
public:  
   virtual void f() override {}  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)