---
title: "Procedura: effettuare il marshalling di strutture tramite PInvoke | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "marshalling dei dati [C++], strutture"
  - "interoperabilità [C++], strutture"
  - "marshalling [C++], strutture"
  - "platform invoke [C++], strutture"
ms.assetid: 35997e6f-9251-4af3-8c6e-0712d64d6a5d
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 28
---
# Procedura: effettuare il marshalling di strutture tramite PInvoke
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come chiamare funzioni native che accettano stringhe di tipo C da funzioni gestite che forniscono un'istanza di <xref:System.String> mediante P\/Invoke.  Sebbene sia consigliabile utilizzare le funzionalità di interoperabilità di C\+\+ anziché P\/Invoke perché P\/Invoke non segnala adeguatamente gli errori in fase di compilazione, non è indipendente dai tipi e la sua implementazione può rivelarsi noiosa, se l'API gestita viene assemblata come una DLL e il codice sorgente non è disponibile, P\/Invoke è l'unica opzione.  In caso contrario, vedere i seguenti documenti:  
  
-   [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)  
  
-   [How to: Marshal Structures Using PInvoke](../dotnet/how-to-marshal-structures-using-pinvoke.md)  
  
 Per impostazione predefinita, le strutture native e gestite vengono disposte in memoria in modo differente. Di conseguenza, il passaggio delle strutture tra codice gestito e codice non gestito richiede operazioni aggiuntive per mantenere l'integrità dei dati.  
  
 In questo documento vengono illustrati i passaggi necessari per definire gli equivalenti gestiti delle strutture native e viene illustrato come passare le strutture risultanti alle funzioni non gestite.  Si presuppone che vengano utilizzate strutture semplici, ossia non contenenti stringhe o puntatori.  Per informazioni sull'interoperabilità di strutture non copiabili, vedere [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md).  P\/Invoke non può disporre di tipi non copiabili come valori restituiti.  I tipi copiabili hanno la stessa rappresentazione nel codice gestito e non.  Per ulteriori informazioni, vedere [Blittable and Non\-Blittable Types](../Topic/Blittable%20and%20Non-Blittable%20Types.md).  
  
 Il marshalling di semplici strutture copiabili tra codice gestito e codice non gestito richiede innanzitutto che siano definite le versioni gestite di ciascuna struttura nativa.  Queste strutture possono avere un qualsiasi nome valido. Non esiste infatti alcuna relazione tra le versioni nativa e gestita delle due strutture, ad eccezione del layout dei dati.  È quindi essenziale che i campi della versione gestita abbiano la stessa dimensione e siano disposti nello stesso ordine della versione nativa. Poiché non esiste alcun meccanismo per assicurare che le versioni gestita e nativa della struttura siano equivalenti, le eventuali incompatibilità saranno visibili solo in fase di esecuzione.  Spetta quindi al programmatore garantire che le due strutture abbiano lo stesso layout dei dati.  
  
 Poiché la disposizione dei membri delle strutture gestite viene talvolta modificata allo scopo di migliorare le prestazioni, è necessario utilizzare l'attributo <xref:System.Runtime.InteropServices.StructLayoutAttribute> per indicare che la struttura è stata disposta in ordine sequenziale.  Si consiglia di impostare esplicitamente l'opzione relativa alla compressione della struttura in modo che corrisponda a quella utilizzata dalla struttura nativa. Per impostazione predefinita, comunque, in Visual C\+\+ viene utilizzata una compressione a 8 byte per il codice gestito.  
  
1.  Utilizzare <xref:System.Runtime.InteropServices.DllImportAttribute> per dichiarare i punti di ingresso corrispondenti alle eventuali funzioni non gestite che accettano la struttura ma utilizzano la relativa versione gestita nelle firme della funzione. Questi punti possono creare problemi se si utilizza lo stesso nome per entrambe le versioni della struttura.  
  
2.  A questo punto, il codice gestito può passare la versione gestita della struttura alle funzioni non gestite, come se queste fossero in realtà funzioni gestite.  Queste strutture possono essere passate per valore o per riferimento, come illustrato nell'esempio seguente.  
  
## Esempio  
 Il codice riportato di seguito è costituito da un modulo gestito e un modulo non gestito.  Il modulo non gestito è una DLL in cui sono definite una struttura denominata Location e una funzione denominata GetDistance che accetta due istanze della struttura Location.  Il secondo modulo è un'applicazione gestita da riga di comando che importa la funzione GetDistance definendola tuttavia rispetto a MLocation, un equivalente gestito della struttura Location.  In pratica, sebbene venga utilizzato probabilmente lo stesso nome per entrambe le versioni della struttura, in questo caso viene utilizzato un nome differente per dimostrare che il prototipo DllImport è definito rispetto alla versione gestita.  
  
 Il modulo gestito è compilato con \/clr, ma funziona anche \/clr:pure.  
  
 Nessuna parte della DLL viene esposta al codice gestito utilizzando la normale direttiva \#include.  In realtà, l'accesso alla DLL viene eseguito solo in fase di esecuzione. Di conseguenza, gli eventuali problemi con le funzioni importate con DllImport non verranno rilevati in fase di compilazione.  
  
```  
// TraditionalDll3.cpp  
// compile with: /LD /EHsc  
#include <iostream>  
#include <stdio.h>  
#include <math.h>  
  
#define TRADITIONALDLL_EXPORTS  
#ifdef TRADITIONALDLL_EXPORTS  
   #define TRADITIONALDLL_API __declspec(dllexport)  
#else  
   #define TRADITIONALDLL_API __declspec(dllimport)  
#endif  
  
#pragma pack(push, 8)  
struct Location {  
   int x;  
   int y;  
};  
#pragma pack(pop)  
  
extern "C" {  
   TRADITIONALDLL_API double GetDistance(Location, Location);  
   TRADITIONALDLL_API void InitLocation(Location*);  
}  
  
double GetDistance(Location loc1, Location loc2) {  
   printf_s("[unmanaged] loc1(%d,%d)", loc1.x, loc1.y);  
   printf_s(" loc2(%d,%d)\n", loc2.x, loc2.y);  
  
   double h = loc1.x - loc2.x;  
   double v = loc1.y = loc2.y;  
   double dist = sqrt( pow(h,2) + pow(v,2) );  
  
   return dist;  
}  
  
void InitLocation(Location* lp) {  
   printf_s("[unmanaged] Initializing location...\n");  
   lp->x = 50;  
   lp->y = 50;  
}  
```  
  
## Esempio  
  
```  
// MarshalStruct_pi.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
[StructLayout(LayoutKind::Sequential, Pack=8)]  
value struct MLocation {  
   int x;  
   int y;  
};  
  
value struct TraditionalDLL {  
   [DllImport("TraditionalDLL3.dll")]  
   static public double GetDistance(MLocation, MLocation);  
   [DllImport("TraditionalDLL3.dll")]  
   static public double InitLocation(MLocation*);  
};  
  
int main() {  
   MLocation loc1;  
   loc1.x = 0;  
   loc1.y = 0;  
  
   MLocation loc2;  
   loc2.x = 100;  
   loc2.y = 100;  
  
   double dist = TraditionalDLL::GetDistance(loc1, loc2);  
   Console::WriteLine("[managed] distance = {0}", dist);  
  
   MLocation loc3;  
   TraditionalDLL::InitLocation(&loc3);  
   Console::WriteLine("[managed] x={0} y={1}", loc3.x, loc3.y);  
}  
```  
  
  **\[unmanaged\] loc1\(0,0\) loc2\(100,100\)**  
**\[managed\] distance \= 141.42135623731**  
**\[unmanaged\] Initializing location...**  
**\[managed\] x\=50 y\=50**   
## Vedere anche  
 [Utilizzo esplicito di PInvoke in C\+\+ \(attributo DllImport\)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)