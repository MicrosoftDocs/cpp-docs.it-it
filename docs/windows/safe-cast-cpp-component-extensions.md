---
title: safe_cast (estensioni del componente C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- safe_cast
- safe_cast_cpp
- stdcli::language::safe_cast
dev_langs: C++
helpviewer_keywords: safe_cast keyword [C++]
ms.assetid: 4fa688bf-a8ec-49bc-a4c5-f48134efa4f7
caps.latest.revision: "26"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 14bcf198d527fae51a579a2aa6e072a4c57424f1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="safecast-c-component-extensions"></a>safe_cast (Estensioni del componente C++)
In caso di esito positivo, l'operazione `safe_cast` restituisce l'espressione specificata come tipo specificato. In caso contrario, genera un'eccezione `InvalidCastException`.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
[default]:: safe_cast<  
type-id  
>(  
expression  
)  
  
```  
  
### <a name="parameters"></a>Parametri  
  
### <a name="remarks"></a>Note  
  
## <a name="windows-runtime"></a>Windows Runtime  
 `safe_cast` consente di modificare il tipo di un'espressione specificata. In situazioni in cui si prevede che una variabile o parametro sia convertibile in un determinato tipo, è possibile usare safe_cast senza un blocco try-catch per rilevare errori di programmazione durante lo sviluppo. Per ulteriori informazioni, vedere [cast (C + + CX)](http://msdn.microsoft.com/library/windows/apps/hh755802.aspx).  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
[default]:: safe_cast<  
type-id  
>(  
expression  
)  
  
```  
  
### <a name="parameters"></a>Parametri  
 *id tipo*  
 Il tipo da convertire *espressione* per. Handle a un tipo riferimento o valore, un tipo valore oppure un riferimento di rilevamento a un tipo riferimento o valore.  
  
 *espressione*  
 Espressione che restituisce un handle a tipo riferimento o valore oppure un riferimento di rilevamento a un tipo riferimento o valore.  
  
### <a name="remarks"></a>Note  
 `safe_cast`Genera `InvalidCastException` se non è possibile convertire *espressione* al tipo specificato da *id tipo*. Per intercettare `InvalidCastException`, specificare il [/EH (modello di gestione delle eccezioni)](../build/reference/eh-exception-handling-model.md) l'opzione del compilatore e utilizzare un'istruzione try/catch.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 Esempio di codice seguente viene illustrato come utilizzare `safe_cast` con Windows Runtime.  
  
```cpp#  
// safe_cast_ZW.cpp  
// compile with: /ZW /EHsc  
  
using namespace default;  
using namespace Platform;  
  
interface class I1 {};  
interface class I2 {};  
interface class I3 {};  
  
ref class X : public I1, public I2 {};  
  
int main(Array<String^>^ args) {  
   I1^ i1 = ref new X;  
   I2^ i2 = safe_cast<I2^>(i1);   // OK, I1 and I2 have common type: X  
   // I2^ i3 = static_cast<I2^>(i1);   C2440 use safe_cast instead  
   try {  
      I3^ i4 = safe_cast<I3^>(i1);   // Fails because i1 is not derived from I3.  
   }   
   catch(InvalidCastException^ ic) {  
     wprintf(L"Caught expected exception: %s\n", ic->Message);  
   }  
}  
```  
  
 **Output**  
  
```Output  
Caught expected exception: InvalidCastException  
```  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 `safe_cast` consente di modificare il tipo di un'espressione e generare codice MSIL verificabile.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
[cli]:: safe_cast<  
type-id  
>(  
expression  
)  
  
```  
  
### <a name="parameters"></a>Parametri  
 *id tipo*  
 Handle a un tipo riferimento o valore, un tipo valore oppure un riferimento di rilevamento a un tipo riferimento o valore.  
  
 *espressione*  
 Espressione che restituisce un handle a tipo riferimento o valore oppure un riferimento di rilevamento a un tipo riferimento o valore.  
  
### <a name="remarks"></a>Note  
 L'espressione `safe_cast<` *id tipo*`>(`*espressione* `)` Converte l'espressione dell'operando in un oggetto di tipo type-id.  
  
 Il compilatore accetta un [static_cast](../cpp/static-cast-operator.md) nella maggior parte delle posizioni che accetti un `safe_cast`.  Tuttavia, è garantito che `safe_cast` generi codice MSIL verificabile, mentre `static_cast` potrebbe generare codice MSIL non verificabile.  Vedere [codice Pure e verificabile (C + + CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md) e [Peverify.exe (strumento PEVerify)](/dotnet/framework/tools/peverify-exe-peverify-tool) per ulteriori informazioni sul codice verificabile.  
  
 Come `static_cast`, `safe_cast` richiama le conversioni definite dall'utente.  
  
 Per ulteriori informazioni sui cast, vedere [operatori di cast](../cpp/casting-operators.md).  
  
 `safe_cast`non si applica un **const_cast** (eseguire il cast **const**).  
  
 `safe_cast` è nello spazio dei nomi cli.  Vedere [Platform, default e cli spazi dei nomi](../windows/platform-default-and-cli-namespaces-cpp-component-extensions.md) per ulteriori informazioni.  
  
 Per ulteriori informazioni su **safe_cast**t, vedere:  
  
-   [Cast di tipo C con /clr (C + c++ /CLI)](../windows/c-style-casts-with-clr-cpp-cli.md)  
  
-   [Procedura: Usare safe_cast in C++/CLI](../dotnet/how-to-use-safe-cast-in-cpp-cli.md)  

### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 Un esempio del caso in cui il compilatore non accetterà un `static_cast` ma accetterà un `safe_cast` è per i cast tra tipi di interfaccia non correlati.  Con `safe_cast`, il compilatore non genererà un errore di conversione ed eseguirà un controllo in fase di esecuzione per vedere se è possibile eseguire il cast  
  
```cpp  
// safe_cast.cpp  
// compile with: /clr  
using namespace System;  
  
interface class I1 {};  
interface class I2 {};  
interface class I3 {};  
  
ref class X : public I1, public I2 {};  
  
int main() {  
   I1^ i1 = gcnew X;  
   I2^ i2 = safe_cast<I2^>(i1);   // OK, I1 and I2 have common type: X  
   // I2^ i3 = static_cast<I2^>(i1);   C2440 use safe_cast instead  
   try {  
      I3^ i4 = safe_cast<I3^>(i1);   // fail at runtime, no common type  
   }   
   catch(InvalidCastException^) {  
      Console::WriteLine("Caught expected exception");  
   }  
}  
```  
  
 **Output**  
  
```Output  
Caught expected exception  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)