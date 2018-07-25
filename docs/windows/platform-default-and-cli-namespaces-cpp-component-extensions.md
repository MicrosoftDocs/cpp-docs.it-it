---
title: Piattaforma, default e cli spazi dei nomi (estensioni del componente C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- lang
- cli
dev_langs:
- C++
helpviewer_keywords:
- lang namespace
- cli namespace
ms.assetid: 9d38bd1e-dc78-47d1-a84b-9b4683e52c9c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b466a94aba9f19907a5438a8b8e623d65aa0ac2d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33880747"
---
# <a name="platform-default-and-cli-namespaces--c-component-extensions"></a>Spazi dei nomi Platform, default e cli (Estensioni del componente C++)
Uno spazio dei nomi qualifica i nomi di un elemento del linguaggio in modo che i nomi non siano in conflitto con nomi identici nel codice sorgente. Ad esempio, un conflitto di nomi potrà impedire al compilatore riconoscendo [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md). Gli spazi dei nomi vengono utilizzati dal compilatore, ma non vengono mantenuti nell'assembly compilato.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 Quando si creare un progetto, in Visual C++ è disponibile uno spazio dei nomi predefinito per il progetto stesso. È possibile rinominare manualmente lo spazio dei nomi, anche se in Windows Runtime il nome del file. winmd deve corrispondere al nome dello spazio dei nomi radice.  
  
## <a name="windows-runtime"></a>Windows Runtime  
 Per ulteriori informazioni, vedere [gli spazi dei nomi e visibilità del tipo (C + + CX)](http://msdn.microsoft.com/library/windows/apps/hh969551.aspx).  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 **Sintassi**  
  
```  
using namespace cli;  
```  
  
 **Note**  
  
 C + + CLI supporta il `cli` dello spazio dei nomi. Durante la compilazione con **/clr**, `using` istruzione nella sezione relativa alla sintassi è implicita.  
  
 Nello spazio dei nomi `cli` sono presenti le funzionalità del linguaggio seguenti:  
  
-   [Array](../windows/arrays-cpp-component-extensions.md)  
  
-   [interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)  
  
-   [pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)  
  
-   [safe_cast](../windows/safe-cast-cpp-component-extensions.md)  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 Nell'esempio di codice seguente viene illustrato che è possibile utilizzare un simbolo nello spazio dei nomi `cli` come simbolo definito dall'utente nel codice.  Tuttavia, una volta eseguita questa operazione, è necessario qualificare in modo esplicito o implicito i riferimenti all'elemento del linguaggio `cli` dello stesso nome.  
  
```  
// cli_namespace.cpp  
// compile with: /clr  
using namespace cli;  
int main() {  
   array<int> ^ MyArray = gcnew array<int>(100);  
   int array = 0;  
  
   array<int> ^ MyArray2 = gcnew array<int>(100);   // C2062  
  
   // OK  
   cli::array<int> ^ MyArray2 = gcnew cli::array<int>(100);  
   ::array<int> ^ MyArray3 = gcnew ::array<int>(100);  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)