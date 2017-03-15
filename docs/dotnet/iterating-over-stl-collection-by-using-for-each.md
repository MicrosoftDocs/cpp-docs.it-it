---
title: "Scorrimento di una raccolta STL con for each | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "raccolte DTL, scorrimento"
ms.assetid: 9358ca29-b982-4a19-bbfd-bef50fe66c9a
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Scorrimento di una raccolta STL con for each
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La parola chiave di `for each` può essere utilizzata per scorrere una raccolta di libreria C\+\+ standard \(STL\).  
  
## Tutte le piattaforme  
 **Osservazioni**  
  
 Una raccolta STL è anche nota come *contenitore*.  Per ulteriori informazioni, vedere [Contenitori STL](../standard-library/stl-containers.md).  
  
## Esempi  
 **Esempio**  
  
 Nell'esempio di codice riportato `for each` per scorrere [\< map \>](../standard-library/map.md).  
  
```  
// for_each_stl.cpp  
// compile with: /EHsc  
#include <map>  
#include <iostream>  
#include <string>  
using namespace std;  
  
int main() {  
   int retval  = 0;  
   map<string, int> months;  
  
   months["january"] = 31;  
   months["february"] = 28;  
   months["march"] = 31;  
   months["april"] = 30;  
   months["may"] = 31;  
   months["june"] = 30;  
   months["july"] = 31;  
   months["august"] = 31;  
   months["september"] = 30;  
   months["october"] = 31;  
   months["november"] = 30;  
   months["december"] = 31;  
  
   map<string, int> months_30;  
  
   for each( pair<string, int> c in months )  
      if ( c.second == 30 )  
         months_30[c.first] = c.second;  
  
   for each( pair<string, int> c in months_30 )  
      retval++;  
  
   cout << "Months with 30 days = " << retval << endl;  
}  
```  
  
 **Output**  
  
  **Mesi con 30 giorni \= 4** **Esempio**  
  
 Nell'esempio di codice seguente viene utilizzato un riferimento const \(`const&`\) per una variabile di iterazione con i contenitori STL.  È possibile utilizzare un riferimento \(`&`\) come variabile di iterazione in una raccolta di tipo che può essere dichiarato come *T*`&`.  
  
```  
// for_each_stl_2.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
using namespace std;  
  
int main() {  
   int retval = 0;  
  
   vector<int> col(3);  
   col[0] = 10;  
   col[1] = 20;  
   col[2] = 30;  
  
   for each( const int& c in col )  
      retval += c;  
  
   cout << "retval: " << retval << endl;  
}  
```  
  
 **Output**  
  
  **retval: 60**   
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 **Osservazioni**  
  
 Non esistono commenti specifici della piattaforma su questa funzionalità.  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Osservazioni**  
  
 Non esistono commenti specifici della piattaforma su questa funzionalità.  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
## Vedere anche  
 [for each, in](../dotnet/for-each-in.md)   
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)