---
title: 'Procedura: leggere dati dal Registro di sistema (C + + CLI) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Visual C++, reading from Windows Registry
- registry, reading
ms.assetid: aebf52c0-acc7-40e2-adbc-d34e0a1e467e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 87c882bcf2a7900e1f95ea968407c159333c6cb2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33132554"
---
# <a name="how-to-read-data-from-the-windows-registry-ccli"></a>Procedura: leggere i dati dal Registro di sistema di Windows (C++/CLI)
Nell'esempio di codice viene illustrato come utilizzare il <xref:Microsoft.Win32.Registry.CurrentUser> chiave per leggere i dati dal Registro di sistema Windows. In primo luogo, il sottochiavi vengono enumerate utilizzando il <xref:Microsoft.Win32.RegistryKey.GetSubKeyNames%2A> (metodo) e quindi la sottochiave identità viene aperta utilizzando il <xref:Microsoft.Win32.RegistryKey.OpenSubKey%2A> metodo. Come per le chiavi di primo livello, ogni sottochiave è rappresentata dalla <xref:Microsoft.Win32.RegistryKey> classe. Infine, il nuovo <xref:Microsoft.Win32.RegistryKey> oggetto viene utilizzato per enumerare le coppie chiave/valore.  
  
## <a name="example"></a>Esempio  
  
### <a name="code"></a>Codice  
  
```  
// registry_read.cpp  
// compile with: /clr  
using namespace System;  
using namespace Microsoft::Win32;  
  
int main( )  
{  
   array<String^>^ key = Registry::CurrentUser->GetSubKeyNames( );  
  
   Console::WriteLine("Subkeys within CurrentUser root key:");  
   for (int i=0; i<key->Length; i++)  
   {  
      Console::WriteLine("   {0}", key[i]);  
   }  
  
   Console::WriteLine("Opening subkey 'Identities'...");  
   RegistryKey^ rk = nullptr;  
   rk = Registry::CurrentUser->OpenSubKey("Identities");  
   if (rk==nullptr)  
   {  
      Console::WriteLine("Registry key not found - aborting");  
      return -1;  
   }  
  
   Console::WriteLine("Key/value pairs within 'Identities' key:");  
   array<String^>^ name = rk->GetValueNames( );  
   for (int i=0; i<name->Length; i++)  
   {  
      String^ value = rk->GetValue(name[i])->ToString();  
      Console::WriteLine("   {0} = {1}", name[i], value);  
   }  
  
   return 0;  
}  
```  
  
## <a name="remarks"></a>Note  
 Il <xref:Microsoft.Win32.Registry> classe è semplicemente un contenitore per le istanze statiche di <xref:Microsoft.Win32.RegistryKey>. Ogni istanza rappresenta un nodo del Registro di sistema radice. Le istanze sono <xref:Microsoft.Win32.Registry.ClassesRoot>, <xref:Microsoft.Win32.Registry.CurrentConfig>, <xref:Microsoft.Win32.Registry.CurrentUser>, <xref:Microsoft.Win32.Registry.LocalMachine>, e <xref:Microsoft.Win32.Registry.Users>.  
  
 Oltre a essere statico, gli oggetti all'interno di <xref:Microsoft.Win32.Registry> classe sono di sola lettura. Le istanze del <xref:Microsoft.Win32.RegistryKey> gli oggetti di classe creata per accedere al contenuto del Registro di sistema sono di sola lettura. Per un esempio di come eseguire l'override di questo comportamento, vedere [procedura: scrivere dati nel Registro di sistema di Windows (C + + CLI)](../dotnet/how-to-write-data-to-the-windows-registry-cpp-cli.md).  
  
 Esistono altri due oggetti nel <xref:Microsoft.Win32.Registry> classe: <xref:Microsoft.Win32.Registry.DynData> e <xref:Microsoft.Win32.Registry.PerformanceData>. Entrambi sono istanze della <xref:Microsoft.Win32.RegistryKey> classe. Il <xref:Microsoft.Win32.Registry.DynData> oggetto contiene le informazioni dinamiche del Registro di sistema, che sono supportate solo in Windows 98 e Windows Me. Il <xref:Microsoft.Win32.Registry.PerformanceData> oggetto può essere utilizzato per accedere alle informazioni del contatore delle prestazioni per applicazioni che utilizzano il sistema di monitoraggio delle prestazioni di Windows. Il <xref:Microsoft.Win32.Registry.PerformanceData> nodo rappresenta le informazioni che non vengono effettivamente memorizzate nel Registro di sistema e pertanto non possono essere visualizzate in Regedit.exe.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: scrivere dati nel Registro di sistema di Windows (C + + CLI)](../dotnet/how-to-write-data-to-the-windows-registry-cpp-cli.md)   
 [Operazioni Windows (C + c++ /CLI)](../dotnet/windows-operations-cpp-cli.md)   
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)